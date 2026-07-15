#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestPhaseType_TypeDefinitionIndex = 12772;

	enum class FightFestPhaseType : ::System::Int32
	{
		None = 0,
		MainRace = 1,
		ScoreRace = 2,
		Rest = 3,
		KnockedOut = 4,
		Finished = 5,
	};
}
