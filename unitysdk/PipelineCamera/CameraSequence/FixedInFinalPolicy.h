#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceRuntimeDataProvider_1.h"
#include "unitysdk/PipelineCamera/FinalCameraData.h"

#define PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1569D0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int FixedInFinalPolicy_TypeDefinitionIndex = 38566;

	class FixedInFinalPolicy : public ::PipelineCamera::CameraSequence::CameraSequenceRuntimeDataProvider_1<::PipelineCamera::FinalCameraData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_FIXEDINFINALPOLICY__CTOR_OFFSET))(this);
		}
	};
}
