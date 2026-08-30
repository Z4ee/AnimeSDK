#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class LifeCycleEventArgument; }
namespace RPGTools::Timeline { class LifeCycleEventBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE866B00)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE866CA0)
#define RPGTOOLS_TIMELINE_LIFECYCLEEVENTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE866CB0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LifeCycleEventClip_TypeDefinitionIndex = 48610;

	class LifeCycleEventClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::LifeCycleEventArgument* Argument; // 0x18
		::RPGTools::Timeline::LifeCycleEventBehaviour* template_; // 0x20
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIFECYCLEEVENTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
