#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierAddReason_TypeDefinitionIndex = 53312;

	enum class ModifierAddReason : ::System::Int32
	{
		ByAddModifier = 0,
		ByInfectModifier = 1,
	};
}
