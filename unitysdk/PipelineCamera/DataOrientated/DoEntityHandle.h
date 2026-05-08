#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace PipelineCamera::DataOrientated
{
	inline static constexpr unsigned int DoEntityHandle_TypeDefinitionIndex = 36117;

	struct alignas(4) DoEntityHandle
	{
		::System::Int32 _index; // 0x10
		::System::Int32 _serialNumber; // 0x14
	};
}
