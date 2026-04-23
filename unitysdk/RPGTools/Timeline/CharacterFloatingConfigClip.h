#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPG::GameCore { class AdventureCharacterFloatingConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERFLOATINGCONFIGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8AA300)
#define RPGTOOLS_TIMELINE_CHARACTERFLOATINGCONFIGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8AA4E0)
#define RPGTOOLS_TIMELINE_CHARACTERFLOATINGCONFIGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8AA4F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterFloatingConfigClip_TypeDefinitionIndex = 44707;

	class CharacterFloatingConfigClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double Start; // 0x18
		::System::Double End; // 0x20
		::System::String* CharacterUniqueName; // 0x28
		::System::Boolean EnableFloating; // 0x30
		::RPG::GameCore::AdventureCharacterFloatingConfig* Config; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFLOATINGCONFIGCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFLOATINGCONFIGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFLOATINGCONFIGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
