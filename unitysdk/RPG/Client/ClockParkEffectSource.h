#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkEffectSource_TypeDefinitionIndex = 61590;

	enum class ClockParkEffectSource : ::System::Int32
	{
		None = 0,
		Action = 1,
		Buff = 2,
	};
}
