#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_RESETPOSTPROCESSTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD0467F0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ResetPostProcessTimelineTrack_TypeDefinitionIndex = 45879;

	class ResetPostProcessTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_RESETPOSTPROCESSTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
