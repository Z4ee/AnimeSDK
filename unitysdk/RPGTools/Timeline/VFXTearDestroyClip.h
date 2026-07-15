#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_VFXTEARDESTROYCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19F62A40)
#define RPGTOOLS_TIMELINE_VFXTEARDESTROYCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19F62A30)
#define RPGTOOLS_TIMELINE_VFXTEARDESTROYCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19F62BD0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int VFXTearDestroyClip_TypeDefinitionIndex = 46308;

	class VFXTearDestroyClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARDESTROYCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARDESTROYCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_VFXTEARDESTROYCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
