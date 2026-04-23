#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB895310)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB895300)
#define RPGTOOLS_TIMELINE_ATMOSPHERECENTERCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB895500)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AtmosphereCenterClip_TypeDefinitionIndex = 44617;

	class AtmosphereCenterClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean Reset; // 0x18
		::System::String* AreaName; // 0x20
		::System::String* AnchorName; // 0x28
		::System::Boolean EffectMunicipal; // 0x30
		::System::Boolean EffectAudio; // 0x31

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ATMOSPHERECENTERCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
