#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DynamicStringContextScope_TypeDefinitionIndex = 23916;

	enum class DynamicStringContextScope : ::System::Int32
	{
		Context = 0,
		ContextTaskTemplate = 1,
		ContextAbility = 2,
		ContextModifier = 3,
		ContextOwner = 4,
	};
}
