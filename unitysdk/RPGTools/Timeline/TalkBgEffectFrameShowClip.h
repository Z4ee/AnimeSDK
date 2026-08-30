#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8F3780)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8F3770)
#define RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8F3910)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkBgEffectFrameShowClip_TypeDefinitionIndex = 48834;

	class TalkBgEffectFrameShowClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* EffectFrameType; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKBGEFFECTFRAMESHOWCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
