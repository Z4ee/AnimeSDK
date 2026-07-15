#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19990C70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformerEventTimelineTrack_TypeDefinitionIndex = 46663;

	class PerformerEventTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
