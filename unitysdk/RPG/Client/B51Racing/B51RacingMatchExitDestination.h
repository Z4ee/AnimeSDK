#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingMatchExitDestination_TypeDefinitionIndex = 80535;

	enum class B51RacingMatchExitDestination : ::System::Int32
	{
		None = 0,
		MainPage = 1,
		SeasonMatchFailCustomString = 2,
		ChallengeMatchList = 3,
	};
}
