#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD041B40)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFTimelineTrack_TypeDefinitionIndex = 45840;

	class DOFTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINETRACK__CTOR_OFFSET))(this);
		}
	};
}
