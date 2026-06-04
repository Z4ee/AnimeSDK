#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StoryCharacterApperMode.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD058270)
#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD058260)
#define RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD0583D0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryCharacterVisibleClip_TypeDefinitionIndex = 45604;

	class StoryCharacterVisibleClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::Boolean Show; // 0x20
		::RPG::GameCore::StoryCharacterApperMode Mode; // 0x24
		::System::Boolean EnableDither; // 0x28
		::System::String* FadeEffectPath; // 0x30
		::System::String* FadeInEffect; // 0x38
		::System::String* FadeOutEffect; // 0x40
		::System::Single FadeOutEffectTime; // 0x48
		::System::Boolean LoadEffectAysnc; // 0x4C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYCHARACTERVISIBLECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
