#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_TIMESCALETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0x19F53E90)
#define RPGTOOLS_TIMELINE_TIMESCALETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19F53F50)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimeScaleTrack_TypeDefinitionIndex = 46725;

	class TimeScaleTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMESCALETRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMESCALETRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
