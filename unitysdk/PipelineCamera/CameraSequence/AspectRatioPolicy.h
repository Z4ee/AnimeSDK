#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_1.h"

#define PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1E910260)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int AspectRatioPolicy_TypeDefinitionIndex = 38573;

	class AspectRatioPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_1<::System::Single>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_ASPECTRATIOPOLICY__CTOR_OFFSET))(this);
		}
	};
}
