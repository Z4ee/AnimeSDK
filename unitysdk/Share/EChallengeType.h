#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EChallengeType_TypeDefinitionIndex = 12756;

	enum class EChallengeType : ::System::Int16
	{
		BattleTime = 1,
		ContinusKill = 8,
		HurtHPPercent = 11,
		AttackCount = 6,
		LimitBattle = 10,
		Dodge = 2,
		BeHitCount = 5,
		QTECount = 7,
		BackAttackCount = 9,
		KillCount = 4,
		Damage = 3,
	};
}
