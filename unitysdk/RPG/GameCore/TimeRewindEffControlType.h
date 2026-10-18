#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeRewindEffControlType_TypeDefinitionIndex = 16603;

	enum class TimeRewindEffControlType : ::System::Int32
	{
		TriggerNewEffect = 0,
		UseCurrentEff = 1,
		UseCurrentBackwardEff = 2,
	};
}
