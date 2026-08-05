#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Unreal/FRotator.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_3.h"

#define PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CA390)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int RotatorDampingPolicy_TypeDefinitionIndex = 38578;

	class RotatorDampingPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_3<::Foundation::Unreal::FRotator, ::Foundation::Unreal::FRotator, ::Foundation::Unreal::FRotator>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ROTATORDAMPINGPOLICY__CTOR_OFFSET))(this);
		}
	};
}
