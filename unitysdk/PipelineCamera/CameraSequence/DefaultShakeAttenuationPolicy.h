#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_1.h"

#define PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKEATTENUATIONPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5643F0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int DefaultShakeAttenuationPolicy_TypeDefinitionIndex = 37980;

	class DefaultShakeAttenuationPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_DEFAULTSHAKEATTENUATIONPOLICY__CTOR_OFFSET))(this);
		}
	};
}
