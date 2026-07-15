#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_ACTIVETIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6A530)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ActiveTimelineTrack_TypeDefinitionIndex = 46023;

	class ActiveTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVETIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
