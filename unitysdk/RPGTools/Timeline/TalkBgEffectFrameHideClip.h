#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19F51350)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19F51340)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19F514E0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkBgEffectFrameHideClip_TypeDefinitionIndex = 46587;

	class TalkBgEffectFrameHideClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMEHIDECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
