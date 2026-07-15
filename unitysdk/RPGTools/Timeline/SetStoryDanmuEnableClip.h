#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_SETSTORYDANMUENABLECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x199B4120)
#define RPGTOOLS_TIMELINE_SETSTORYDANMUENABLECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x199B4110)
#define RPGTOOLS_TIMELINE_SETSTORYDANMUENABLECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x199B42B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int SetStoryDanmuEnableClip_TypeDefinitionIndex = 46290;

	class SetStoryDanmuEnableClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean IsEnable; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTORYDANMUENABLECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTORYDANMUENABLECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_SETSTORYDANMUENABLECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
