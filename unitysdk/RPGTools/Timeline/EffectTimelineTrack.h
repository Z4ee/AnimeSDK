#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_EFFECTTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A3C080)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EffectTimelineTrack_TypeDefinitionIndex = 46633;

	class EffectTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
