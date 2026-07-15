#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindSetIgnoreTickLodReason_TypeDefinitionIndex = 54903;

	enum class TimeRewindSetIgnoreTickLodReason : ::System::Int32
	{
		NotStableState = 0,
		Performance = 1,
	};
}
