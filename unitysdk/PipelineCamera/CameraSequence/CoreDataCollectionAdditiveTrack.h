#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/AdditiveCameraSequenceTrack_3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CoreDataCollectionSegment; }
namespace PipelineCamera::CameraSequence { class CoreDataComposite; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONADDITIVETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1D5642D0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCollectionAdditiveTrack_TypeDefinitionIndex = 37880;

	class CoreDataCollectionAdditiveTrack : public ::PipelineCamera::CameraSequence::AdditiveCameraSequenceTrack_3<::PipelineCamera::CameraSequence::CoreDataCollectionSegment*, ::PipelineCamera::CameraSequence::CoreDataComposite*, ::PipelineCamera::WorldBasicCameraData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOLLECTIONADDITIVETRACK__CTOR_OFFSET))(this);
		}
	};
}
