#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ClockParkEffectSource_TypeDefinitionIndex = 57497;

	enum class ClockParkEffectSource : ::System::Int32
	{
		None = 0,
		Action = 1,
		Buff = 2,
	};
}
