#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMETWOPOINTSINCOREPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD48880)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameTwoPointsInCorePolicy_TypeDefinitionIndex = 37910;

	class FrameTwoPointsInCorePolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_3<::PipelineCamera::WorldBasicCameraData, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMETWOPOINTSINCOREPOLICY__CTOR_OFFSET))(this);
		}
	};
}
