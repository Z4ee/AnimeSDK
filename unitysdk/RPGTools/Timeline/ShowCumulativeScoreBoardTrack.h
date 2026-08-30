#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xE8E3BD0)
#define RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE8E3C40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ShowCumulativeScoreBoardTrack_TypeDefinitionIndex = 48740;

	class ShowCumulativeScoreBoardTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDTRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SHOWCUMULATIVESCOREBOARDTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
