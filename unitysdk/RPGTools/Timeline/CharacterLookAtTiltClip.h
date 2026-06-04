#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CharacterLookAtTiltData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERLOOKATTILTCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFF04C0)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATTILTCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xCFF0630)
#define RPGTOOLS_TIMELINE_CHARACTERLOOKATTILTCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF0640)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterLookAtTiltClip_TypeDefinitionIndex = 45281;

	class CharacterLookAtTiltClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double Start; // 0x18
		::System::Double End; // 0x20
		::RPGTools::Timeline::CharacterLookAtTiltData* Config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATTILTCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATTILTCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERLOOKATTILTCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
