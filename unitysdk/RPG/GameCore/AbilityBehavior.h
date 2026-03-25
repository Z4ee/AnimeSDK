#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AbilityBehavior_TypeDefinitionIndex = 16703;

	enum class AbilityBehavior : ::System::Int32
	{
		None = 0,
		SkipCheckLogicState = 1,
	};
}
