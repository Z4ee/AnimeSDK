#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_2.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1ABCB370)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameOnePointInCorePolicy_TypeDefinitionIndex = 37908;

	class FrameOnePointInCorePolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_2<::PipelineCamera::WorldBasicCameraData, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINCOREPOLICY__CTOR_OFFSET))(this);
		}
	};
}
