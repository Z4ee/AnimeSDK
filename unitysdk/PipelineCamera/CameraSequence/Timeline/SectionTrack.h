#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONTRACK_ONDELETECLIP_OFFSET UNITYSDK_OFFSET(0x1FC6CCA0)
#define PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FC6CCB0)

namespace PipelineCamera::CameraSequence::Timeline
{
	inline static constexpr unsigned int SectionTrack_TypeDefinitionIndex = 94422;

	class SectionTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONTRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnDeleteClip(::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + PIPELINECAMERA_CAMERASEQUENCE_TIMELINE_SECTIONTRACK_ONDELETECLIP_OFFSET))(this, clip);
		}
	};
}
