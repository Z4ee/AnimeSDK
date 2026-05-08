#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/BaseCameraSequenceTrack_3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CoreDataCollectionSegment; }
namespace PipelineCamera::CameraSequence { class CoreDataComposite; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11DBF0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCollectionTrack_TypeDefinitionIndex = 36271;

	class CoreDataCollectionTrack : public ::PipelineCamera::CameraSequence::BaseCameraSequenceTrack_3<::PipelineCamera::CameraSequence::CoreDataCollectionSegment*, ::PipelineCamera::CameraSequence::CoreDataComposite*, ::PipelineCamera::WorldBasicCameraData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONTRACK__CTOR_OFFSET))(this);
		}
	};
}
