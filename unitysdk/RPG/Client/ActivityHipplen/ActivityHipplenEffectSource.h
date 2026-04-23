#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::ActivityHipplen
{
	inline static constexpr unsigned int ActivityHipplenEffectSource_TypeDefinitionIndex = 69549;

	enum class ActivityHipplenEffectSource : ::System::Int32
	{
		None = 0,
		Work = 1,
		Trait = 2,
	};
}
