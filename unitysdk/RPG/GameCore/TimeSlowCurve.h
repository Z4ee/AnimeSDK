#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int TimeSlowCurve_TypeDefinitionIndex = 17999;

	enum class TimeSlowCurve : ::System::Int32
	{
		None = 0,
		TimeSlowHit = 1,
	};
}
