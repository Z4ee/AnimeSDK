#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Bounds.h"

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineGpuBuildResult_TypeDefinitionIndex = 27525;

	struct alignas(4) PipeSplineGpuBuildResult
	{
		::System::Single totalLength; // 0x10
		::System::Single actualSampleSpacing; // 0x14
		::System::Int32 curveSampleCount; // 0x18
		::System::Int32 pipeInstanceCount; // 0x1C
		::UnityEngine::Bounds renderBounds; // 0x20
	};
}
