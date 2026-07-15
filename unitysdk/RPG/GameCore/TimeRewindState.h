#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindState_TypeDefinitionIndex = 23664;

	enum class TimeRewindState : ::System::Int32
	{
		Stable = 0,
		Forward = 1,
		Rewind = 2,
		Rebuild = 3,
	};
}
