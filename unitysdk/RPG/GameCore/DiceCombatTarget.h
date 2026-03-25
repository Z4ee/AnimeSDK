#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTarget_TypeDefinitionIndex = 14727;

	enum class DiceCombatTarget : ::System::Int32
	{
		Self = 0,
		Enemy = 1,
	};
}
