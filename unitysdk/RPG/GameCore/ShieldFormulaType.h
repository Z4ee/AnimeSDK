#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShieldFormulaType_TypeDefinitionIndex = 23776;

	enum class ShieldFormulaType : ::System::Int32
	{
		Default = 0,
		ShieldByCasterAttack = 1,
		ShieldByCasterDefence = 2,
		ShieldByCasterMaxHP = 3,
		ShieldByTargetMaxHP = 4,
		ShieldByCasterTotalShield = 5,
	};
}
