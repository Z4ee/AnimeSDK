#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierCasterType_TypeDefinitionIndex = 23811;

	enum class ModifierCasterType : ::System::Int32
	{
		Inherit = 0,
		CasterSelf = 1,
		TargetSelf = 2,
	};
}
