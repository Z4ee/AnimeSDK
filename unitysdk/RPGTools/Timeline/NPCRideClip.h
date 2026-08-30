#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_NPCRIDECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8BAD80)
#define RPGTOOLS_TIMELINE_NPCRIDECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE8BAD70)
#define RPGTOOLS_TIMELINE_NPCRIDECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE8BAF10)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int NPCRideClip_TypeDefinitionIndex = 48663;

	class NPCRideClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* TargetUniqueName; // 0x20
		::System::String* SourceAttachPoint; // 0x28
		::System::String* AttachPoint; // 0x30
		::UnityEngine::Vector3 LocalPositionOffset; // 0x38
		::UnityEngine::Vector3 LocalRotationOffset; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCRIDECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCRIDECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCRIDECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
