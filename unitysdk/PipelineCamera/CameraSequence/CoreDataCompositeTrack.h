#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/BaseCameraSequenceTrack_3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CoreDataCompositeSegment; }
namespace PipelineCamera::CameraSequence { class CoreDataSequence; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F233570)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCompositeTrack_TypeDefinitionIndex = 38537;

	class CoreDataCompositeTrack : public ::PipelineCamera::CameraSequence::BaseCameraSequenceTrack_3<::PipelineCamera::CameraSequence::CoreDataCompositeSegment*, ::PipelineCamera::CameraSequence::CoreDataSequence*, ::PipelineCamera::WorldBasicCameraData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITETRACK__CTOR_OFFSET))(this);
		}
	};
}
