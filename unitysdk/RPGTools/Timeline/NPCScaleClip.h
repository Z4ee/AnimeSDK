#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_NPCSCALECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1998D960)
#define RPGTOOLS_TIMELINE_NPCSCALECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1998D950)
#define RPGTOOLS_TIMELINE_NPCSCALECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1998DAC0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int NPCScaleClip_TypeDefinitionIndex = 46432;

	class NPCScaleClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::UnityEngine::Vector3 Scale; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_NPCSCALECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
