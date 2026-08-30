#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class HidePropBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_HIDEPROPCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B591560)
#define RPGTOOLS_TIMELINE_HIDEPROPCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B591700)
#define RPGTOOLS_TIMELINE_HIDEPROPCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B591710)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HidePropClip_TypeDefinitionIndex = 48598;

	class HidePropClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::UInt32 GroupID; // 0x18
		::System::UInt32 propID; // 0x1C
		::RPGTools::Timeline::HidePropBehaviour* template_; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
