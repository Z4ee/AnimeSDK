#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

#define PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x189DBFD0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DeltaEulerPolicy_TypeDefinitionIndex = 36306;

	class DeltaEulerPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_1<::UnityEngine::Vector3>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DELTAEULERPOLICY__CTOR_OFFSET))(this);
		}
	};
}
