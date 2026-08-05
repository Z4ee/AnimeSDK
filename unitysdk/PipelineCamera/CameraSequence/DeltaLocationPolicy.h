#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1EC12C20)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DeltaLocationPolicy_TypeDefinitionIndex = 38574;

	class DeltaLocationPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTALOCATIONPOLICY__CTOR_OFFSET))(this);
		}
	};
}
