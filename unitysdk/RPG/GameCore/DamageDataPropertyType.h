#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DamageDataPropertyType_TypeDefinitionIndex = 23818;

	enum class DamageDataPropertyType : ::System::Int32
	{
		Result_FinalDamage = 0,
		Result_FinalDamageMulRatio = 1,
		Result_ShieldDamage = 2,
		Result_TeamBlockDamage = 3,
		Result_StanceDamage = 4,
		AttackData_DamageValue = 5,
		AttackData_DamagePercentage = 6,
		AttackData_BaseStanceValue = 7,
		AttackData_HitSplitRatio = 8,
		AttackData_RawDamageValue = 9,
		AttackData_RawDamagePercentage = 10,
		AttackData_RawDamageMulRatio = 11,
		AttackData_ConstFinalDamage = 12,
		AttackData_FinalDamageMax = 13,
		Result_FinalDamageBase = 14,
		Result_OverflowHPDamage = 15,
		Result_OverflowHPDamageMulRatio = 16,
		Result_HPReduce = 17,
		Result_HPReduceMulRatio = 18,
	};
}
