#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageDataPropertyType_TypeDefinitionIndex = 21309;

	enum class DamageDataPropertyType : ::System::Int32
	{
		Result_FinalDamage = 0,
		Result_FinalDamageMulRatio = 1,
		Result_ShieldDamage = 2,
		Result_StanceDamage = 3,
		AttackData_DamageValue = 4,
		AttackData_DamagePercentage = 5,
		AttackData_BaseStanceValue = 6,
		AttackData_HitSplitRatio = 7,
		AttackData_RawDamageValue = 8,
		AttackData_RawDamagePercentage = 9,
		AttackData_RawDamageMulRatio = 10,
		AttackData_ConstFinalDamage = 11,
		AttackData_FinalDamageMax = 12,
		Result_FinalDamageBase = 13,
		Result_OverflowHPDamage = 14,
		Result_OverflowHPDamageMulRatio = 15,
		Result_HPReduce = 16,
		Result_HPReduceMulRatio = 17,
	};
}
