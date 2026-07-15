#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int UITopEffectType_TypeDefinitionIndex = 23834;

	enum class UITopEffectType : ::System::Int32
	{
		InValid = 0,
		Trigger = 3,
		Hint = 4,
	};
}
