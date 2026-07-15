#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonopolyGameType_TypeDefinitionIndex = 11563;

	enum class MonopolyGameType : ::System::Int32
	{
		None = 0,
		MonopolyGachaA = 1,
		MonopolyGachaB = 2,
		MonopolyGachaC = 3,
		MonopolyBingoA = 4,
		MonopolyBingoB = 5,
		MonopolyBingoC = 6,
		MonopolyGuessA = 7,
		MonopolyQuiz = 10,
	};
}
