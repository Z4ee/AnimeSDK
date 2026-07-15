#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindExtraMode_TypeDefinitionIndex = 58061;

	enum class TimeRewindExtraMode : ::System::Int32
	{
		Normal = 0,
		LoopRewind = 1,
		DualDirection = 2,
	};
}
