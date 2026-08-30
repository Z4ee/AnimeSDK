#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/SimpleTalkBlackMaskColor.h"
#include "unitysdk/RPGTools/Timeline/MaskInitialAlphaKind.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SIMPLEBLACKMASKCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8E5960)
#define RPGTOOLS_TIMELINE_SIMPLEBLACKMASKCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8E5950)
#define RPGTOOLS_TIMELINE_SIMPLEBLACKMASKCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8E5B60)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SimpleBlackMaskClip_TypeDefinitionIndex = 48767;

	class SimpleBlackMaskClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPG::GameCore::SimpleTalkBlackMaskColor FadeTarget; // 0x18
		::RPGTools::Timeline::MaskInitialAlphaKind InitialAlpha; // 0x1C
		::System::Boolean NeedFadeIn; // 0x20
		::System::Single FadeInDuration; // 0x24
		::System::Boolean NeedFadeOut; // 0x28
		::System::Single FadeOutSecondsFromEnd; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLEBLACKMASKCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLEBLACKMASKCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SIMPLEBLACKMASKCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
