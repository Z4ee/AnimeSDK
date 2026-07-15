#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A37BC0)
#define RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19A37BB0)
#define RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19A37D20)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int DestroyEmojiBubbleClip_TypeDefinitionIndex = 46320;

	class DestroyEmojiBubbleClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_DESTROYEMOJIBUBBLECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
