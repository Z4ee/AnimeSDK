#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_ACTIVETIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xCFD2900)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ActiveTimelineTrack_TypeDefinitionIndex = 45105;

	class ActiveTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVETIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
