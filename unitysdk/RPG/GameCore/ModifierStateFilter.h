#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierStateFilter_TypeDefinitionIndex = 43519;

	enum class ModifierStateFilter : ::System::Int32
	{
		AliveOrToBeAdded = 0,
		Alive = 1,
		None = 2,
	};
}
