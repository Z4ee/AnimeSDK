#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB44FC0)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB44FB0)
#define RPGTOOLS_TIMELINE_CONVINCESPLITLINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB451B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ConvinceSplitLineClip_TypeDefinitionIndex = 38905;

	class ConvinceSplitLineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Single Pos; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CONVINCESPLITLINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
