#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierEventScope_TypeDefinitionIndex = 53299;

	enum class TurnBasedModifierEventScope : ::System::Int32
	{
		None = 0,
		Modifier = 1,
		Entity = 2,
		Global = 3,
	};
}
