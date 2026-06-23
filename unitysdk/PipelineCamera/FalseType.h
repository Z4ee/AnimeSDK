#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_FALSETYPE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x332AB0)

namespace PipelineCamera
{
	inline static constexpr unsigned int FalseType_TypeDefinitionIndex = 37699;

	struct alignas(1) FalseType
	{
		::System::Boolean get_Value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_FALSETYPE_GET_VALUE_OFFSET))(this);
		}
	};
}
