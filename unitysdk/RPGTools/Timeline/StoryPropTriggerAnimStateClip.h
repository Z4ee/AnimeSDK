#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_STORYPROPTRIGGERANIMSTATECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xABA89A0)
#define RPGTOOLS_TIMELINE_STORYPROPTRIGGERANIMSTATECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xABA8990)
#define RPGTOOLS_TIMELINE_STORYPROPTRIGGERANIMSTATECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xABA8B90)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropTriggerAnimStateClip_TypeDefinitionIndex = 39095;

	class StoryPropTriggerAnimStateClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* AnimStateName; // 0x20
		::System::Single TransitionOffset; // 0x28
		::System::Single TransitionDuration; // 0x2C
		::System::Boolean FixedTransitionDuration; // 0x30
		::System::Int32 LayerIndex; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPTRIGGERANIMSTATECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPTRIGGERANIMSTATECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPTRIGGERANIMSTATECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
