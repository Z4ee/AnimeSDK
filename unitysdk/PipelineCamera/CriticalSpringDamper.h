#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_CRITICALSPRINGDAMPER_GET_STIFFNESS_OFFSET UNITYSDK_OFFSET(0x9DE330)
#define PIPELINECAMERA_CRITICALSPRINGDAMPER_PIPELINECAMERA_IVELOCITYBASEDDAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0x9DE390)
#define PIPELINECAMERA_CRITICALSPRINGDAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0x9DE380)
#define PIPELINECAMERA_CRITICALSPRINGDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x55FE60)

namespace PipelineCamera
{
	inline static constexpr unsigned int CriticalSpringDamper_TypeDefinitionIndex = 37659;

	struct alignas(4) CriticalSpringDamper
	{
		::System::Single _damping; // 0x10

		::System::Void _ctor(::System::Single damping)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CRITICALSPRINGDAMPER__CTOR_OFFSET))(this, damping);
		}

		::System::Single get_Stiffness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CRITICALSPRINGDAMPER_GET_STIFFNESS_OFFSET))(this);
		}

		/*
		::PipelineCamera::VelocityBasedDampingStatus Process(::PipelineCamera::VelocityBasedDampingStatus& current, ::PipelineCamera::VelocityBasedDampingStatus& target, ::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::VelocityBasedDampingStatus(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CRITICALSPRINGDAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/

		/*
		::PipelineCamera::VelocityBasedDampingStatus PipelineCamera_IVelocityBasedDamper_Process(::PipelineCamera::VelocityBasedDampingStatus& current, ::PipelineCamera::VelocityBasedDampingStatus& target, ::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::VelocityBasedDampingStatus(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CRITICALSPRINGDAMPER_PIPELINECAMERA_IVELOCITYBASEDDAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/
	};
}
