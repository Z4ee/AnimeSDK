#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EChallengeType_TypeDefinitionIndex = 18060;

	enum class EChallengeType : ::System::Int16
	{
		BattleTime = 1,
		AttackCount = 6,
		Damage = 3,
		Dodge = 2,
		BeHitCount = 5,
		ContinusKill = 8,
		KillCount = 4,
		QTECount = 7,
		HurtHPPercent = 11,
		LimitBattle = 10,
		BackAttackCount = 9,
	};
}
