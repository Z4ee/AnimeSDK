#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x1B0B04A0)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0A6920)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int PostProcessTimelineTrack_TypeDefinitionIndex = 49051;

	class PostProcessTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
