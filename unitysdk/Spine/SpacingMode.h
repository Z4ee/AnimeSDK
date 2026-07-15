#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int SpacingMode_TypeDefinitionIndex = 37527;

	enum class SpacingMode : ::System::Int32
	{
		Length = 0,
		Fixed = 1,
		Percent = 2,
		Proportional = 3,
	};
}
