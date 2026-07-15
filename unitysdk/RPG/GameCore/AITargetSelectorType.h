#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AITargetSelectorType_TypeDefinitionIndex = 14971;

	enum class AITargetSelectorType : ::System::Int32
	{
		DefaultSelector = 0,
		OneDamageSelector = 1,
		SpreadDamageSelector = 2,
		AllDamageSelector = 3,
		OneHealSelector = 4,
		SpreadHealSelector = 5,
		AllHealSelector = 6,
		OneBuffSelector = 7,
		SpreadBuffSelector = 8,
		AllBuffSelector = 9,
		OneDebuffSelector = 10,
		SpreadDebuffSelector = 11,
		AllDebuffSelector = 12,
		OneControlSelector = 13,
		SpreadControlSelector = 14,
		AllControlSelector = 15,
	};
}
