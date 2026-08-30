#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CharacterDirectDissolveBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE828F00)
#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE828FF0)
#define RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE829000)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterDirectDissolveClip_TypeDefinitionIndex = 48409;

	class CharacterDirectDissolveClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::CharacterDirectDissolveBehaviour* template_; // 0x18
		::UnityEngine::Timeline::ClipCaps _clipCaps_k__BackingField; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERDIRECTDISSOLVECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
