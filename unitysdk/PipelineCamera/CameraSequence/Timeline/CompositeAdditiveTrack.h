#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace PipelineCamera::CameraSequence { class CoreDataCompositeAdditiveTrack; }

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_COMPOSITEADDITIVETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6C6D0)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int CompositeAdditiveTrack_TypeDefinitionIndex = 94415;

	class CompositeAdditiveTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::PipelineCamera::CameraSequence::CoreDataCompositeAdditiveTrack* additiveTrackObject; // 0xB0
		::System::Single startOffset; // 0xB8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_COMPOSITEADDITIVETRACK__CTOR_OFFSET))(this);
		}
	};
}
