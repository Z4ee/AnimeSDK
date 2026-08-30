#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityIdleLive
{
	inline static constexpr unsigned int IdleLiveOpenChestLockReason_TypeDefinitionIndex = 75000;

	enum class IdleLiveOpenChestLockReason : ::System::Int32
	{
		WaitingRsp = 1,
		PendingEquipUnselected = 2,
		WaitingHintEnd = 3,
		NotInBattle = 4,
		IsInDungeon = 5,
		IsOpeningChest = 6,
	};
}
