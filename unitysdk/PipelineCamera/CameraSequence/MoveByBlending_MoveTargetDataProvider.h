#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_MOVETARGETDATAPROVIDER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E913890)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int MoveByBlending_MoveTargetDataProvider_TypeDefinitionIndex = 38638;

	class MoveByBlending_MoveTargetDataProvider : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_MOVEBYBLENDING_MOVETARGETDATAPROVIDER__CTOR_OFFSET))(this);
		}
	};
}
