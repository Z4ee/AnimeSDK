#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define PIPELINECAMERA_INTERPTODAMPER_PIPELINECAMERA_IVALUEBASEDDAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0xAC0750)
#define PIPELINECAMERA_INTERPTODAMPER_PROCESS_OFFSET UNITYSDK_OFFSET(0xAC0740)
#define PIPELINECAMERA_INTERPTODAMPER__CTOR_OFFSET UNITYSDK_OFFSET(0x324A50)

namespace PipelineCamera
{
	inline static constexpr unsigned int InterpToDamper_TypeDefinitionIndex = 38315;

	struct alignas(4) InterpToDamper
	{
		::System::Single _interpSpeed; // 0x10

		::System::Void _ctor(::System::Single interpSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPTODAMPER__CTOR_OFFSET))(this, interpSpeed);
		}

		/*
		::PipelineCamera::ValueBasedDampingStatus Process(::PipelineCamera::ValueBasedDampingStatus& current, ::PipelineCamera::ValueBasedDampingStatus& target, ::PipelineCamera::ValueBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::ValueBasedDampingStatus(*)(::PVOID, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPTODAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/

		/*
		::PipelineCamera::ValueBasedDampingStatus PipelineCamera_IValueBasedDamper_Process(::PipelineCamera::ValueBasedDampingStatus& current, ::PipelineCamera::ValueBasedDampingStatus& target, ::PipelineCamera::ValueBasedDampingStatus& lastTarget, ::System::Single deltaTime)
		{
			return ((::PipelineCamera::ValueBasedDampingStatus(*)(::PVOID, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&, ::PipelineCamera::ValueBasedDampingStatus&, ::System::Single))((::PBYTE)hIl2Cpp + PIPELINECAMERA_INTERPTODAMPER_PIPELINECAMERA_IVALUEBASEDDAMPER_PROCESS_OFFSET))(this, current, target, lastTarget, deltaTime);
		}
		*/
	};
}
