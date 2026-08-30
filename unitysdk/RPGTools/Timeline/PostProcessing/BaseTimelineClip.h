#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"

namespace UnityEngine::Timeline { class TrackAsset; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BASETIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8C4AF0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BaseTimelineClip_TypeDefinitionIndex = 48988;

	class BaseTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::UnityEngine::Timeline::TrackAsset* TrackAssetObj; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BASETIMELINECLIP__CTOR_OFFSET))(this);
		}
	};
}
