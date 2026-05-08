#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_INTERPCONSTANTTODAMPER_PIPELINECAMERA_IVALUEBASEDDAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0x99BDD0)
#define PIPELINECAMERA_INTERPCONSTANTTODAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0x99BDC0)
#define PIPELINECAMERA_INTERPCONSTANTTODAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x2E7CE0)

namespace PipelineCamera
{
	inline static constexpr unsigned int InterpConstantToDamper_TypeDefinitionIndex = 36047;

	struct alignas(4) InterpConstantToDamper
	{
		::System::Single _interpConstantSpeed; // 0x10

		::System::Void _ctor(::System::Single interpConstantSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPCONSTANTTODAMPER__CTOR_OFFSET))(this, interpConstantSpeed);
		}

		/*
		::PipelineCamera::ValueBasedDampingStatus Process(::PipelineCamera::ValueBasedDampingStatus& current, ::PipelineCamera::ValueBasedDampingStatus& target, ::PipelineCamera::ValueBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::ValueBasedDampingStatus(*)(::PVOID, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPCONSTANTTODAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/

		/*
		::PipelineCamera::ValueBasedDampingStatus PipelineCamera_IValueBasedDamper_Process(::PipelineCamera::ValueBasedDampingStatus& current, ::PipelineCamera::ValueBasedDampingStatus& target, ::PipelineCamera::ValueBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::ValueBasedDampingStatus(*)(::PVOID, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPCONSTANTTODAMPER_PIPELINECAMERA_IVALUEBASEDDAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/
	};
}
