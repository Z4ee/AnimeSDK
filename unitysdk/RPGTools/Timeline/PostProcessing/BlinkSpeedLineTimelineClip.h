#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::PostProcessing { class BlinkSpeedLineTimelineBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8C6160)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8C6250)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8C6260)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int BlinkSpeedLineTimelineClip_TypeDefinitionIndex = 48993;

	class BlinkSpeedLineTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::PostProcessing::BlinkSpeedLineTimelineBehaviour* Template; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_BLINKSPEEDLINETIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
