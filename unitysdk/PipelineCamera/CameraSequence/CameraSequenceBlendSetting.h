#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraDataDeltaFlag.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine { class AnimationCurve; }

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEBLENDSETTING__CTOR_OFFSET UNITYSDK_OFFSET(0x1BABBED0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceBlendSetting_TypeDefinitionIndex = 36175;

	class CameraSequenceBlendSetting : public ::System::Object
	{
	public:
		::PipelineCamera::WorldBasicCameraDataDeltaFlag blendFlag; // 0x10
		::System::Single blendTime; // 0x14
		::UnityEngine::AnimationCurve* blendCurve; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEBLENDSETTING__CTOR_OFFSET))(this);
		}
	};
}
