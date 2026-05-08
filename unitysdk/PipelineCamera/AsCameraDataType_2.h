#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera
{
	inline static constexpr unsigned int AsCameraDataType_2_TypeDefinitionIndex = 35958;

	template <typename TNullable, typename T>
	struct AsCameraDataType_2
	{
		TNullable _value; // 0x0
		T _fallback; // 0x0
	};
}
