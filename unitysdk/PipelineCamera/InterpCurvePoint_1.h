#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int InterpCurvePoint_1_TypeDefinitionIndex = 38343;

	template <typename T>
	struct InterpCurvePoint_1
	{
		::System::Single Time; // 0x0
		T Value; // 0x0
		T ArriveTangent; // 0x0
		T LeaveTangent; // 0x0
	};
}
