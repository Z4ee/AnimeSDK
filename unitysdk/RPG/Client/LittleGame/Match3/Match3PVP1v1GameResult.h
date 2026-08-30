#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame::Match3
{
	inline static constexpr unsigned int Match3PVP1v1GameResult_TypeDefinitionIndex = 41389;

	enum class Match3PVP1v1GameResult : ::System::Int32
	{
		Invalid = 0,
		Win = 1,
		Lose = 2,
		Tie = 3,
		GiveUp = 4,
	};
}
