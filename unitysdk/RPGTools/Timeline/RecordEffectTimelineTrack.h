#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_RECORDEFFECTTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAB98540)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int RecordEffectTimelineTrack_TypeDefinitionIndex = 39280;

	class RecordEffectTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_RECORDEFFECTTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
