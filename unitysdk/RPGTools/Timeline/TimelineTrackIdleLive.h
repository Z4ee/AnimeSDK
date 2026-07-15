#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_TIMELINETRACKIDLELIVE__CTOR_OFFSET UNITYSDK_OFFSET(0x19F550E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimelineTrackIdleLive_TypeDefinitionIndex = 46032;

	class TimelineTrackIdleLive : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINETRACKIDLELIVE__CTOR_OFFSET))(this);
		}
	};
}
