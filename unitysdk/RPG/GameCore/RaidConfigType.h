#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RaidConfigType_TypeDefinitionIndex = 13999;

	enum class RaidConfigType : ::System::Int32
	{
		None = 0,
		Mission = 1,
		Relic = 2,
		Challenge = 3,
		TreasureChallenge = 4,
		PunkLord = 5,
		SaveMission = 6,
		Trial = 7,
		EquilibriumTrial = 8,
		Heliobus = 9,
		ActivityRaidCollection = 10,
		ClockPark = 11,
	};
}
