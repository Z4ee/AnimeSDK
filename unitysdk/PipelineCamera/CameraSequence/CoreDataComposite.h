#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/CameraSequenceComposite_5.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CoreDataCompositeAdditiveTrack; }
namespace PipelineCamera::CameraSequence { class CoreDataCompositeSegment; }
namespace PipelineCamera::CameraSequence { class CoreDataCompositeTrack; }
namespace PipelineCamera::CameraSequence { class CoreDataSequence; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B11DC50)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataComposite_TypeDefinitionIndex = 36275;

	class CoreDataComposite : public ::PipelineCamera::CameraSequence::CameraSequenceComposite_5<::PipelineCamera::CameraSequence::CoreDataSequence*, ::PipelineCamera::CameraSequence::CoreDataCompositeSegment*, ::PipelineCamera::CameraSequence::CoreDataCompositeTrack*, ::PipelineCamera::CameraSequence::CoreDataCompositeAdditiveTrack*, ::PipelineCamera::WorldBasicCameraData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITE__CTOR_OFFSET))(this);
		}
	};
}
