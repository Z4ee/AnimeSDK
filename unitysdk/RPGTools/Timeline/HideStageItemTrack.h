#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

#define RPGTOOLS_TIMELINE_HIDESTAGEITEMTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD024BD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HideStageItemTrack_TypeDefinitionIndex = 45439;

	class HideStageItemTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDESTAGEITEMTRACK__CTOR_OFFSET))(this);
		}
	};
}
