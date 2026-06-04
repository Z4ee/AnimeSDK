#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtModifierEventScope_TypeDefinitionIndex = 50231;

	enum class RtModifierEventScope : ::System::Int32
	{
		None = 0,
		Modifier = 1,
		Entity = 2,
		Global = 3,
	};
}
