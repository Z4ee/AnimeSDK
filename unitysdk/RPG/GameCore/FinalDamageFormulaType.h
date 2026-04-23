#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FinalDamageFormulaType_TypeDefinitionIndex = 21477;

	enum class FinalDamageFormulaType : ::System::Int32
	{
		ByDefault = 0,
		ByPureDamage = 1,
		ByBaseDamage = 2,
	};
}
