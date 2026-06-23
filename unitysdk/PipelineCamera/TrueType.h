#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_TRUETYPE_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x4BFE90)

namespace PipelineCamera
{
	inline static constexpr unsigned int TrueType_TypeDefinitionIndex = 37698;

	struct alignas(1) TrueType
	{
		::System::Boolean get_Value()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_TRUETYPE_GET_VALUE_OFFSET))(this);
		}
	};
}
