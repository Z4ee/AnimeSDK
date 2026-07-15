#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore::Match3
{
	inline static constexpr unsigned int PieceTag_TypeDefinitionIndex = 23994;

	enum class PieceTag : ::System::Int32
	{
		Invalid = 0,
		GemPack = 1,
		GemPack3 = 2,
		GemPack2 = 3,
		StepBonus = 4,
		BlackFrog = 5,
		FireEgg = 6,
		FireEgg2 = 7,
		FireEgg3 = 8,
		ScoreBonus = 9,
		ItemPack_1 = 32,
		ItemPack_2 = 33,
		ItemPack_3 = 34,
		ItemPack_4 = 35,
		ItemPack_5 = 36,
		ItemPack_6 = 37,
		ItemPack_7 = 38,
		ItemPack_8 = 39,
	};
}
