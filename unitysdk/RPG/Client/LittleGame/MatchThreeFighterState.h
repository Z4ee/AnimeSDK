#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::LittleGame
{
	inline static constexpr unsigned int MatchThreeFighterState_TypeDefinitionIndex = 62311;

	enum class MatchThreeFighterState : ::System::Int32
	{
		Default = 0,
		Win = 1,
		Lose = 2,
		Tie = 3,
	};
}
