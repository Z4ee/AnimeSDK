#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RtModifierBehaviorLifeBinding_TypeDefinitionIndex = 51307;

	enum class RtModifierBehaviorLifeBinding : ::System::Int32
	{
		ModifierStack = 1,
		ModifierUnstack = 2,
		ModifierDestroy = 4,
		All = 7,
	};
}
