#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ModifierHitEffectStacking_TypeDefinitionIndex = 23880;

	enum class ModifierHitEffectStacking : ::System::Int32
	{
		Unknow = 0,
		HighestPriority = 1,
		Multiple = 2,
	};
}
