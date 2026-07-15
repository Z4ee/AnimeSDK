#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChessRogueDifficultyType_TypeDefinitionIndex = 14171;

	enum class ChessRogueDifficultyType : ::System::Int32
	{
		None = 0,
		Difficulty_1 = 1,
		Difficulty_2 = 2,
		Difficulty_3 = 3,
		Difficulty_4 = 4,
		Difficulty_5 = 5,
	};
}
