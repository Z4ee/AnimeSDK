#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TurnBasedModifierEventScope_TypeDefinitionIndex = 44728;

	enum class TurnBasedModifierEventScope : ::System::Int32
	{
		None = 0,
		Modifier = 1,
		Entity = 2,
		Global = 3,
	};
}
