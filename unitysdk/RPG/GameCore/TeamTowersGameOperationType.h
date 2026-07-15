#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersGameOperationType_TypeDefinitionIndex = 23706;

	enum class TeamTowersGameOperationType : ::System::Int32
	{
		Invalid = 0,
		ForceUnlockPlayerSkill = 1,
		ForceUseBossSkill = 2,
		ForceFlushPlayerSkill = 3,
		ShrinkMoveBound = 4,
		SetAIInvincible = 5,
		CancelUnlockPlayerSkill = 6,
		InfiniteFever = 7,
		ZeroGravity = 8,
		ShowSilverWolfEffect = 9,
		SetBossMinHPWhenBomb = 10,
		LockPlayerMinHP = 11,
		DisableFever = 12,
		DisableBossCharge = 13,
	};
}
