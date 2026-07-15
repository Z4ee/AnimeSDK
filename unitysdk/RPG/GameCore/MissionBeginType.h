#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int MissionBeginType_TypeDefinitionIndex = 10077;

	enum class MissionBeginType : ::System::Int32
	{
		Unknown = 0,
		Auto = 1,
		Manual = 2,
		Client = 3,
		MultiSequence = 4,
		PlayerLevel = 5,
		WorldLevel = 6,
		MultiEvent = 7,
		HeroPathLevel = 9,
		SequenceNextDay = 10,
		CustomValue = 11,
		AnySequence = 12,
		MuseumPhaseRenewPointReach = 13,
		HeliobusPhaseReach = 14,
	};
}
