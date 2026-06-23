#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipeSplineDeformation
{
	inline static constexpr unsigned int CurveSample_TypeDefinitionIndex = 26813;

	struct alignas(4) CurveSample
	{
		// static const ::System::Int32 Stride = 0x40; // 0x0
		::UnityEngine::Vector3 position; // 0x10
		::System::Single distance; // 0x1C
		::UnityEngine::Vector3 tangent; // 0x20
		::System::Single padding0; // 0x2C
		::UnityEngine::Vector3 normal; // 0x30
		::System::Single padding1; // 0x3C
		::UnityEngine::Vector3 binormal; // 0x40
		::System::Single padding2; // 0x4C
	};
}
