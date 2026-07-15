#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveCLTriggerType_TypeDefinitionIndex = 11269;

	enum class IdleLiveCLTriggerType : ::System::Int32
	{
		KillMonsterCount = 1,
		SpecifiedMonsterHPRemain = 2,
		BattleFailCount = 3,
		InstantTrigger = 4,
		BattleAvatarDeadCount = 5,
		ReceiveGift = 6,
		ReceiveSpecifiedGift = 7,
		AvatarUltraSkillCount = 8,
		RepeatFailCountInSameNode = 9,
		SoldBetterEquipCount = 10,
		MessageUnreadCount = 11,
		ChestCount = 12,
		EnergyBarBreak = 13,
	};
}
