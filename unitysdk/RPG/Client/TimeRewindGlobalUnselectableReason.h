#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindGlobalUnselectableReason_TypeDefinitionIndex = 56092;

	enum class TimeRewindGlobalUnselectableReason : ::System::Int32
	{
		QteCatchGhost = 0,
		Task = 1,
	};
}
