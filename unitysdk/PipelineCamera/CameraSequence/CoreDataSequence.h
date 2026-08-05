#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequence_1.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATASEQUENCE__CTOR_OFFSET UNITYSDK_OFFSET(0x1F620E50)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataSequence_TypeDefinitionIndex = 38535;

	class CoreDataSequence : public ::PipelineCamera::CameraSequence::CameraSequence_1<::PipelineCamera::WorldBasicCameraData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATASEQUENCE__CTOR_OFFSET))(this);
		}
	};
}
