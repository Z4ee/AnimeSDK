#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B3481D0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B3481C0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B348330)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterHeadLookAtClip_TypeDefinitionIndex = 47006;

	class BPCharacterHeadLookAtClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* TargetCharacterUniqueName; // 0x20
		::System::String* TargetCharacterAttachPoint; // 0x28
		::System::String* TargetAreaName; // 0x30
		::System::String* TargetAnchorName; // 0x38
		::System::Single Duration; // 0x40
		::System::String* CurveName; // 0x48
		::System::Boolean IgnoreConstraint; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
