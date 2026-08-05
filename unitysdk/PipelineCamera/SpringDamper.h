#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_SPRINGDAMPER_PIPELINECAMERA_IVELOCITYBASEDDAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0xAC0800)
#define PIPELINECAMERA_SPRINGDAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0xAC07F0)
#define PIPELINECAMERA_SPRINGDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0xAC07E0)

namespace PipelineCamera
{
	inline static constexpr unsigned int SpringDamper_TypeDefinitionIndex = 38319;

	struct alignas(4) SpringDamper
	{
		::System::Single _stiffness; // 0x10
		::System::Single _damping; // 0x14

		::System::Void _ctor(::System::Single damping, ::System::Single stiffness)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SPRINGDAMPER__CTOR_OFFSET))(this, damping, stiffness);
		}

		/*
		::PipelineCamera::VelocityBasedDampingStatus Process(::PipelineCamera::VelocityBasedDampingStatus& current, ::PipelineCamera::VelocityBasedDampingStatus& target, ::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::VelocityBasedDampingStatus(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SPRINGDAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/

		/*
		::PipelineCamera::VelocityBasedDampingStatus PipelineCamera_IVelocityBasedDamper_Process(::PipelineCamera::VelocityBasedDampingStatus& current, ::PipelineCamera::VelocityBasedDampingStatus& target, ::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::VelocityBasedDampingStatus(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_SPRINGDAMPER_PIPELINECAMERA_IVELOCITYBASEDDAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/
	};
}
