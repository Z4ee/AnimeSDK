#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_VELOCITYBASEDDAMPINGSTATUS_OP_EXPLICIT_OFFSET UNITYSDK_OFFSET(0x1DD48DD0)
#define PIPELINECAMERA_VELOCITYBASEDDAMPINGSTATUS__CTOR_OFFSET UNITYSDK_OFFSET(0x48A560)

namespace PipelineCamera
{
	inline static constexpr unsigned int VelocityBasedDampingStatus_TypeDefinitionIndex = 37651;

	struct alignas(4) VelocityBasedDampingStatus
	{
		::System::Single Value; // 0x10
		::System::Single Velocity; // 0x14

		::System::Void _ctor(::System::Single value, ::System::Single velocity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VELOCITYBASEDDAMPINGSTATUS__CTOR_OFFSET))(this, value, velocity);
		}

		/*
		static ::PipelineCamera::ValueBasedDampingStatus op_Explicit(::PipelineCamera::VelocityBasedDampingStatus& instance)
		{
			return ((::PipelineCamera::ValueBasedDampingStatus(*)(::PipelineCamera::VelocityBasedDampingStatus&))((::PBYTE)hIl2Cpp + PIPELINECAMERA_VELOCITYBASEDDAMPINGSTATUS_OP_EXPLICIT_OFFSET))(instance);
		}
		*/
	};
}
