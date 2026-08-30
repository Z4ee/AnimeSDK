#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE81CE20)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE81CE10)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE81CF00)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPTalkHideClip_TypeDefinitionIndex = 49274;

	class BPTalkHideClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPTALKHIDECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
