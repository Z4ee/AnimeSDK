#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xB8F2F30)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int PerformerEventTimelineTrack_TypeDefinitionIndex = 45176;

	class PerformerEventTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_PERFORMEREVENTTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
