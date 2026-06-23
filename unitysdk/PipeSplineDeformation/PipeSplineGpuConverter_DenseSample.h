#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int PipeSplineGpuConverter_DenseSample_TypeDefinitionIndex = 26760;

	struct alignas(4) PipeSplineGpuConverter_DenseSample
	{
		::UnityEngine::Vector3 position; // 0x10
		::System::Single distance; // 0x1C
	};
}
