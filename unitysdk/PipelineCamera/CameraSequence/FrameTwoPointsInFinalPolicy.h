#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_3.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMETWOPOINTSINFINALPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B9B85F0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameTwoPointsInFinalPolicy_TypeDefinitionIndex = 36301;

	class FrameTwoPointsInFinalPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_3<::PipelineCamera::FinalCameraData, ::UnityEngine::Vector3, ::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMETWOPOINTSINFINALPOLICY__CTOR_OFFSET))(this);
		}
	};
}
