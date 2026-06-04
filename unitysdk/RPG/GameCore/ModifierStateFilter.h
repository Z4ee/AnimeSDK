#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierStateFilter_TypeDefinitionIndex = 50882;

	enum class ModifierStateFilter : ::System::Int32
	{
		AliveOrToBeAdded = 0,
		Alive = 1,
		None = 2,
	};
}
