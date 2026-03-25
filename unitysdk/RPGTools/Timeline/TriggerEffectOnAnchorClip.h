#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class TriggerEffectOnAnchorBehaviour; }
namespace RPGTools::Timeline { class TriggerEffectOnAnchorData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_TRIGGEREFFECTONANCHORCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABB1360)
#define RPGTOOLS_TIMELINE_TRIGGEREFFECTONANCHORCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xABB1660)
#define RPGTOOLS_TIMELINE_TRIGGEREFFECTONANCHORCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xABB1670)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TriggerEffectOnAnchorClip_TypeDefinitionIndex = 39161;

	class TriggerEffectOnAnchorClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::TriggerEffectOnAnchorData* Config; // 0x18
		::RPGTools::Timeline::TriggerEffectOnAnchorBehaviour* template_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGEREFFECTONANCHORCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGEREFFECTONANCHORCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TRIGGEREFFECTONANCHORCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
