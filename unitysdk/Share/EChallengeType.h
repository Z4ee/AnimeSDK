#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EChallengeType_TypeDefinitionIndex = 14257;

	enum class EChallengeType : ::System::Int16
	{
		Dodge = 2,
		Damage = 3,
		BattleTime = 1,
		QTECount = 7,
		ContinusKill = 8,
		HurtHPPercent = 11,
		AttackCount = 6,
		KillCount = 4,
		BeHitCount = 5,
		BackAttackCount = 9,
		LimitBattle = 10,
	};
}
