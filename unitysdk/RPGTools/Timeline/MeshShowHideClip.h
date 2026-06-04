#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_MESHSHOWHIDECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD02E610)
#define RPGTOOLS_TIMELINE_MESHSHOWHIDECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xD02E7A0)
#define RPGTOOLS_TIMELINE_MESHSHOWHIDECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xD02E7B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int MeshShowHideClip_TypeDefinitionIndex = 45477;

	class MeshShowHideClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* MeshName; // 0x20
		::System::Boolean Show; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MESHSHOWHIDECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MESHSHOWHIDECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_MESHSHOWHIDECLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
