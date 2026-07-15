#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindDeactiveReason_TypeDefinitionIndex = 54909;

	enum class TimeRewindDeactiveReason : ::System::Int32
	{
		Debug = 1,
		EraFlip = 2,
		AnimNotMatch = 4,
		ManagerDeactive = 8,
		Task = 16,
	};
}
