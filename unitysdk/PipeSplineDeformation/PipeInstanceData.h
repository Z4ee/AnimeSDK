#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeInstanceData_TypeDefinitionIndex = 27252;

	struct alignas(4) PipeInstanceData
	{
		// static const ::System::Int32 Stride = 0x20; // 0x0
		::System::Single startDistance; // 0x10
		::System::Single pipeLength; // 0x14
		::System::Int32 curveOffset; // 0x18
		::System::Int32 curveSampleCount; // 0x1C
		::System::Single rollOffset; // 0x20
		::System::Single radiusScale; // 0x24
		::System::Single meshMinX; // 0x28
		::System::Single meshLength; // 0x2C
	};
}
