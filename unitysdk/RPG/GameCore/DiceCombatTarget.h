#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatTarget_TypeDefinitionIndex = 15422;

	enum class DiceCombatTarget : ::System::Int32
	{
		Self = 0,
		Enemy = 1,
		None = 2,
		AbilityTarget = 3,
		CombatTarget = 4,
		Teammate = 5,
	};
}
