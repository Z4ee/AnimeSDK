#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ECommonAITag_TypeDefinitionIndex = 51874;

	enum class ECommonAITag : ::System::Byte
	{
		Undefined = 0x0,
		DamageNeedAttack = 0x1,
		DamageNeedDef = 0x2,
		DamageNeedHp = 0x3,
		DamageNeedNoCrit = 0x4,
		DamageNeedCrit = 0x5,
		DamageCarry = 0x6,
		TotalPowerWeight = 0x7,
	};
}
