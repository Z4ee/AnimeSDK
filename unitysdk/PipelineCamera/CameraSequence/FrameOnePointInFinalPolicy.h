#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_2.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E5CA370)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameOnePointInFinalPolicy_TypeDefinitionIndex = 38568;

	class FrameOnePointInFinalPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_2<::PipelineCamera::FinalCameraData, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEONEPOINTINFINALPOLICY__CTOR_OFFSET))(this);
		}
	};
}
