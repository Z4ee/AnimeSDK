#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceSegment_2.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CoreDataSequence; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITESEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1F32A940)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCompositeSegment_TypeDefinitionIndex = 38536;

	class CoreDataCompositeSegment : public ::PipelineCamera::CameraSequence::CameraSequenceSegment_2<::PipelineCamera::CameraSequence::CoreDataSequence*, ::PipelineCamera::WorldBasicCameraData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITESEGMENT__CTOR_OFFSET))(this);
		}
	};
}
