#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8B8370)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DeltaLocationPolicy_TypeDefinitionIndex = 37913;

	class DeltaLocationPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY__CTOR_OFFSET))(this);
		}
	};
}
