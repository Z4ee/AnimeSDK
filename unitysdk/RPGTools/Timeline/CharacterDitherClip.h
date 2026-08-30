#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/StoryCharacterApperMode.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CharacterDitherBehaviour; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERDITHERCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1D13C100)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1D13C0F0)
#define RPGTOOLS_TIMELINE_CHARACTERDITHERCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D13C270)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterDitherClip_TypeDefinitionIndex = 48405;

	class CharacterDitherClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPG::GameCore::StoryCharacterApperMode Mode; // 0x20
		::System::Boolean EnableDither; // 0x24
		::System::String* FadeEffectPath; // 0x28
		::System::String* FadeInEffect; // 0x30
		::System::String* FadeOutEffect; // 0x38
		::System::Single FadeOutEffectTime; // 0x40
		::System::Boolean LoadEffectAysnc; // 0x44
		::RPGTools::Timeline::CharacterDitherBehaviour* Template; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDITHERCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
