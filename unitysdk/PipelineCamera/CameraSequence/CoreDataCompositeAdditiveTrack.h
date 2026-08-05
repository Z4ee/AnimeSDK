#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/PipelineCamera/CameraSequence/AdditiveCameraSequenceTrack_3.h"
#include "unitysdk/PipelineCamera/WorldBasicCameraData.h"

namespace PipelineCamera::CameraSequence { class CoreDataCompositeSegment; }
namespace PipelineCamera::CameraSequence { class CoreDataSequence; }

#define PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITEADDITIVETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1B5CF0)

namespace PipelineCamera::CameraSequence
{
	inline static constexpr unsigned int CoreDataCompositeAdditiveTrack_TypeDefinitionIndex = 38538;

	class CoreDataCompositeAdditiveTrack : public ::PipelineCamera::CameraSequence::AdditiveCameraSequenceTrack_3<::PipelineCamera::CameraSequence::CoreDataCompositeSegment*, ::PipelineCamera::CameraSequence::CoreDataSequence*, ::PipelineCamera::WorldBasicCameraData>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_COREDATACOMPOSITEADDITIVETRACK__CTOR_OFFSET))(this);
		}
	};
}
