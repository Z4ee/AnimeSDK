#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int SkillAutoLockType_TypeDefinitionIndex = 17477;

	enum class SkillAutoLockType : ::System::Int32
	{
		Default = 0,
		LowHP = 1,
		HighHP = 2,
		HighSPNotFull = 3,
		HighDPT = 4,
		HighED = 5,
		AdjoinDefault = 6,
		HighWEDO_DamageNeedAttack = 7,
		HighWEDO_DamageNeedDef = 8,
		HighWEDO_DamageNeedHP = 9,
		HighWEDO_DamageCarry = 10,
		HighWP_DamageNeedAttack = 11,
		HighWP_DamageNeedDef = 12,
		HighWP_DamageNeedHP = 13,
		HighWP_DamageCarry = 14,
		HighWP_DamageNeedNoCrit = 15,
		HighWP_DamageNeedCrit = 16,
		Avatar_Jade_BP = 17,
		ScoreOfSource = 18,
	};
}
