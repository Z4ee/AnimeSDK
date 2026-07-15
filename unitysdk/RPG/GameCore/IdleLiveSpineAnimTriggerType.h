#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveSpineAnimTriggerType_TypeDefinitionIndex = 11400;

	enum class IdleLiveSpineAnimTriggerType : ::System::Int32
	{
		None = 0,
		Idle = 1,
		EliteWin = 2,
		BattleFail = 3,
		ReceiveGift = 4,
		ReceiveManyGifts = 5,
		SoldBetterEquip = 6,
		BattleRepeatedFail = 7,
		FirstGoldenEquip = 8,
		FirstRedEquip = 9,
		FirstColorfulEquip = 10,
		FirstFullGoldenEquip = 11,
		FirstFullColorfulEquip = 12,
		FirstFullRedEquip = 13,
		BattleAvatarDead = 14,
		AvatarUltraSkill = 15,
		First3StarAvatar = 16,
		First4StarAvatar = 17,
		First5StarAvatar = 18,
		BossWin = 19,
		StayInSameNodePowerEnough = 20,
		StayInSameNodePowerNotEnough = 21,
		ReceiveQuestion = 22,
		CanGachaTenInARow = 23,
		CanGachaTwentyInARow = 24,
	};
}
