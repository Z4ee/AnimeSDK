#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB8EB80)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAB87800)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB8EBD0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int PostProcessTimelineTrack_TypeDefinitionIndex = 39400;

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

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_POSTPROCESSTIMELINETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, P0);
		}
	};
}
