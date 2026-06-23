#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_VALUEBASEDDAMPINGSTATUS_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1D8BB880)
#define PIPELINECAMERA_VALUEBASEDDAMPINGSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x55FE60)

namespace PipelineCamera
{
	inline static constexpr unsigned int ValueBasedDampingStatus_TypeDefinitionIndex = 37650;

	struct alignas(4) ValueBasedDampingStatus
	{
		::System::Single Value; // 0x10

		::System::Void _ctor(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VALUEBASEDDAMPINGSTATUS__CTOR_OFFSET))(this, value);
		}

		static ::PipelineCamera::ValueBasedDampingStatus op_Explicit(::System::Single value)
		{
			return ((::PipelineCamera::ValueBasedDampingStatus(*)(::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VALUEBASEDDAMPINGSTATUS_OP_EXPLICIT_OFFSET))(value);
		}
	};
}
