#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int BombType_TypeDefinitionIndex = 23992;

	enum class BombType : ::System::Int32
	{
		Invalid = 0,
		Vertical = 1,
		Horizontal = 2,
		MultiStyle = 3,
		AllScreen = 4,
		Square = 5,
		Square2x2 = 6,
		RandomFourBreak = 7,
		CrossShape = 8,
		VerAndHori = 9,
		SquareVertical = 10,
		SquareHorizontal = 11,
		Square5x5 = 12,
		FireEgg = 13,
	};
}
