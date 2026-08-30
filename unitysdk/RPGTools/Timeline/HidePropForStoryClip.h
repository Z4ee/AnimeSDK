#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B591950)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B591940)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B591AE0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HidePropForStoryClip_TypeDefinitionIndex = 48601;

	class HidePropForStoryClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean Hide; // 0x18
		::System::UInt32 GroupID; // 0x1C
		::System::UInt32 PropID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
