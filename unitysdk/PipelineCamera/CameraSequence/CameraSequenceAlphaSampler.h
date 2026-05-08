#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_2.h"

#define PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEALPHASAMPLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8A31D0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CameraSequenceAlphaSampler_TypeDefinitionIndex = 36250;

	class CameraSequenceAlphaSampler : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_2<::System::Single, ::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_CAMERASEQUENCEALPHASAMPLER__CTOR_OFFSET))(this);
		}
	};
}
