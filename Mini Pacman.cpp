#include<iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>
#include <Windows.h>
using namespace std;
#define keyLeft 75	//defining functions
#define keyRight 77
int main()
{
		char arr[50];
		int r, x = 0, score = 0;
		char c , ch;
		cout << "Enter any character: (except 'X') ";
		cin >> c;
		r = rand() % 50;
		while (score < 10)
		{
			for (int i = 0; i < 50; i++)
				arr[i] = '.';
			system("cls");
			arr[r] = 'X';
			arr[x] = c;
			if (arr[x] == arr[r])
			{
				score++;
				r = rand() % 50;
				arr[r] = 'X';
			}
			for (int i = 0; i < 50; i++)
				cout << arr[i];
			cout << endl << endl;
			cout << "Score: " << score;
			ch = _getch();
			switch (ch)
			{
			case keyLeft:
				x--;
				if (x < 0)
					x = 49;
				break;
			case keyRight:
				x++;
				if (x > 49)
					x = 0;
			}

		}
		cout << endl << "You win!" << endl;
		system("pause");
		return 0;
}
