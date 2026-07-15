#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int AlertValueCompareType_TypeDefinitionIndex = 23670;

	enum class AlertValueCompareType : ::System::Int32
	{
		AlertValueInRange = 0,
		AlertValueLargerThanGuardMin = 1,
		AlertValueLargerThanGuardMax = 2,
	};
}
