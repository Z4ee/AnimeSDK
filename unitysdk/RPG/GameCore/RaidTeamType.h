#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidTeamType_TypeDefinitionIndex = 14004;

	enum class RaidTeamType : ::System::Int32
	{
		None = 0,
		Player = 1,
		Trial = 2,
		TrialAndPlayer = 3,
		TrialOnly = 4,
		TrialOrPlayer = 5,
	};
}
