#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int TimeRewindCapsuleDirection_TypeDefinitionIndex = 60941;

	enum class TimeRewindCapsuleDirection : ::System::Int32
	{
		AxisX = 0,
		AxisY = 1,
		AxisZ = 2,
	};
}
