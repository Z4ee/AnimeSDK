#pragma once
#include "unitysdk/unitysdk.h"

namespace PathCreation
{
	inline static constexpr unsigned int BezierPath_ControlMode_TypeDefinitionIndex = 35834;

	enum class BezierPath_ControlMode : ::System::Int32
	{
		Aligned = 0,
		Mirrored = 1,
		Free = 2,
		Automatic = 3,
	};
}
