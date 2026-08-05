#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Animation
{
	inline static constexpr unsigned int BlendShapeSampleData_TypeDefinitionIndex = 67919;

	struct alignas(4) BlendShapeSampleData
	{
		::System::Boolean enable; // 0x10
		::System::Int32 sampleCount; // 0x14
	};
}
