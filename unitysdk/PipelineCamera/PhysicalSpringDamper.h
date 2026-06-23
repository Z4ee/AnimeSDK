#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_PHYSICALSPRINGDAMPER_GENERATEINITIALVALUE_OFFSET UNITYSDK_OFFSET(0x884580)
#define PIPELINECAMERA_PHYSICALSPRINGDAMPER_GENERATERELAXOFFSET_OFFSET UNITYSDK_OFFSET(0x884500)
#define PIPELINECAMERA_PHYSICALSPRINGDAMPER_PIPELINECAMERA_IVELOCITYBASEDDAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0x884610)
#define PIPELINECAMERA_PHYSICALSPRINGDAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0x8844F0)
#define PIPELINECAMERA_PHYSICALSPRINGDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x8844E0)

namespace PipelineCamera
{
	inline static constexpr unsigned int PhysicalSpringDamper_TypeDefinitionIndex = 37656;

	struct alignas(4) PhysicalSpringDamper
	{
		::System::Single _stiffness; // 0x10
		::System::Single _damping; // 0x14

		::System::Void _ctor(::System::Single damping, ::System::Single stiffness)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_PHYSICALSPRINGDAMPER__CTOR_OFFSET))(this, damping, stiffness);
		}

		/*
		::PipelineCamera::VelocityBasedDampingStatus Process(::PipelineCamera::VelocityBasedDampingStatus& current, ::PipelineCamera::VelocityBasedDampingStatus& target, ::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::VelocityBasedDampingStatus(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_PHYSICALSPRINGDAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/

		/*
		::System::Single GenerateRelaxOffset(::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::PipelineCamera::VelocityBasedDampingStatus& target, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_PHYSICALSPRINGDAMPER_GENERATERELAXOFFSET_OFFSET))(this, lastTarget, target, deltaTime);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> GenerateInitialValue(::PipelineCamera::VelocityBasedDampingStatus& current, ::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::System::Single relaxOffset)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_PHYSICALSPRINGDAMPER_GENERATEINITIALVALUE_OFFSET))(this, current, lastTarget, relaxOffset);
		}
		*/

		/*
		::PipelineCamera::VelocityBasedDampingStatus PipelineCamera_IVelocityBasedDamper_Process(::PipelineCamera::VelocityBasedDampingStatus& current, ::PipelineCamera::VelocityBasedDampingStatus& target, ::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::VelocityBasedDampingStatus(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_PHYSICALSPRINGDAMPER_PIPELINECAMERA_IVELOCITYBASEDDAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/
	};
}
