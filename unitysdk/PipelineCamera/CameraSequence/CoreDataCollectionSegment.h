#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceSegment_2.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CoreDataComposite; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONSEGMENT__CTOR_OFFSET UNITYSDK_OFFSET(0x1B074470)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCollectionSegment_TypeDefinitionIndex = 36270;

	class CoreDataCollectionSegment : public ::PipelineCamera::CameraSequence::CameraSequenceSegment_2<::PipelineCamera::CameraSequence::CoreDataComposite*, ::PipelineCamera::WorldBasicCameraData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONSEGMENT__CTOR_OFFSET))(this);
		}
	};
}
