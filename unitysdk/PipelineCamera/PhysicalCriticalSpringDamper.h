#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER_GENERATEINITIALVALUE_OFFSET UNITYSDK_OFFSET(0x987CB0)
#define PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER_GENERATERELAXOFFSET_OFFSET UNITYSDK_OFFSET(0x987BE0)
#define PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER_GET_STIFFNESS_OFFSET UNITYSDK_OFFSET(0x987B80)
#define PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER_PIPELINECAMERA_IVELOCITYBASEDDAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0x987D40)
#define PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0x987BD0)
#define PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x2E7CE0)

namespace PipelineCamera
{
	inline static constexpr unsigned int PhysicalCriticalSpringDamper_TypeDefinitionIndex = 36049;

	struct alignas(4) PhysicalCriticalSpringDamper
	{
		::System::Single _damping; // 0x10

		::System::Void _ctor(::System::Single damping)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER__CTOR_OFFSET))(this, damping);
		}

		::System::Single get_Stiffness()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER_GET_STIFFNESS_OFFSET))(this);
		}

		/*
		::PipelineCamera::VelocityBasedDampingStatus Process(::PipelineCamera::VelocityBasedDampingStatus& current, ::PipelineCamera::VelocityBasedDampingStatus& target, ::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::VelocityBasedDampingStatus(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/

		/*
		::System::Single GenerateRelaxOffset(::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::PipelineCamera::VelocityBasedDampingStatus& target, ::System::Single deltaTime)
		{
			return ((::System::Single(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER_GENERATERELAXOFFSET_OFFSET))(this, lastTarget, target, deltaTime);
		}
		*/

		/*
		::System::ValueTuple_2<::System::Single, ::System::Single> GenerateInitialValue(::PipelineCamera::VelocityBasedDampingStatus& current, ::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::System::Single relaxOffset)
		{
			return ((::System::ValueTuple_2<::System::Single, ::System::Single>(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER_GENERATEINITIALVALUE_OFFSET))(this, current, lastTarget, relaxOffset);
		}
		*/

		/*
		::PipelineCamera::VelocityBasedDampingStatus PipelineCamera_IVelocityBasedDamper_Process(::PipelineCamera::VelocityBasedDampingStatus& current, ::PipelineCamera::VelocityBasedDampingStatus& target, ::PipelineCamera::VelocityBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::VelocityBasedDampingStatus(*)(::PVOID, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::PipelineCamera::VelocityBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_PHYSICALCRITICALSPRINGDAMPER_PIPELINECAMERA_IVELOCITYBASEDDAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/
	};
}
