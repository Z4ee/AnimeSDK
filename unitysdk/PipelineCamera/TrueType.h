#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_TRUETYPE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x48CD40)

namespace PipelineCamera
{
	inline static constexpr unsigned int TrueType_TypeDefinitionIndex = 36090;

	struct alignas(1) TrueType
	{
		::System::Boolean get_Value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TRUETYPE_GET_VALUE_OFFSET))(this);
		}
	};
}
