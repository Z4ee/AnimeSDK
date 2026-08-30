#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_HIDESTAGEITEMTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B592F70)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideStageItemTrack_TypeDefinitionIndex = 48608;

	class HideStageItemTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMTRACK__CTOR_OFFSET))(this);
		}
	};
}
