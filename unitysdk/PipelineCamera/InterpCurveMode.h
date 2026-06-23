#pragma once
#include "unitysdk/unitysdk.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int InterpCurveMode_TypeDefinitionIndex = 37681;

	enum class InterpCurveMode : ::System::Byte
	{
		Linear = 0x0,
		Cubic = 0x1,
		Constant = 0x2,
		Bezier = 0x3,
	};
}
