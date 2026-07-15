#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveFuncUnlockType_TypeDefinitionIndex = 11327;

	enum class IdleLiveFuncUnlockType : ::System::Int32
	{
		None = 0,
		OpenEntryTechTree = 1,
		OpenEntryGacha = 2,
		OpenEntryDungeon = 3,
		ExtendTeamSlot = 4,
		IncreaseAvatarMaxLevel = 5,
		UnlockSpEquipSlot = 6,
	};
}
