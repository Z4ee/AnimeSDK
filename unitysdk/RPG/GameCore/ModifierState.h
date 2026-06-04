#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierState_TypeDefinitionIndex = 50881;

	enum class ModifierState : ::System::Int32
	{
		ToBeAdded = 0,
		Alive = 1,
		ToBeRemoved = 2,
		Removed = 3,
	};
}
