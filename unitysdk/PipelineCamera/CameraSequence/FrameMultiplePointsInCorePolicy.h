#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"
#include "unitysdk/System/Span_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace PipelineCamera::CameraSequence { class CameraSequenceContext; }

#define PIPELINECAMERA_CAMERASEQUENCE_FRAMEMULTIPLEPOINTSINCOREPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11DCD0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FrameMultiplePointsInCorePolicy_TypeDefinitionIndex = 36303;

	class FrameMultiplePointsInCorePolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FRAMEMULTIPLEPOINTSINCOREPOLICY__CTOR_OFFSET))(this);
		}
	};
}
