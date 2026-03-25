#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class EffectParameter; }
namespace RPGTools::Timeline { class EffectTimelineBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_EFFECTTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB4B650)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB4B5E0)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xAB4B5F0)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB4B850)
#define RPGTOOLS_TIMELINE_EFFECTTIMELINECLIP___IFIXBASEPROXY_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xAB4B8B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EffectTimelineClip_TypeDefinitionIndex = 39237;

	class EffectTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::EffectParameter* Parameter; // 0x18
		::RPGTools::Timeline::EffectTimelineBehaviour* template_; // 0x20
		::System::Single _duration; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINECLIP_GET_DURATION_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Double __iFixBaseProxy_get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EFFECTTIMELINECLIP___IFIXBASEPROXY_GET_DURATION_OFFSET))(this);
		}
	};
}
