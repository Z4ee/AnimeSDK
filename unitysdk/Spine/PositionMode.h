#pragma once
#include "unitysdk/unitysdk.h"

namespace Spine
{
	inline static constexpr unsigned int PositionMode_TypeDefinitionIndex = 32887;

	enum class PositionMode : ::System::Int32
	{
		Fixed = 0,
		Percent = 1,
	};
}
