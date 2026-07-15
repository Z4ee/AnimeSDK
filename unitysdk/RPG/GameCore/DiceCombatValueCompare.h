#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatValueCompare_TypeDefinitionIndex = 15501;

	enum class DiceCombatValueCompare : ::System::Int32
	{
		Less = 0,
		LessEqual = 1,
		Equal = 2,
		Greater = 3,
		GreaterEqual = 4,
	};
}
