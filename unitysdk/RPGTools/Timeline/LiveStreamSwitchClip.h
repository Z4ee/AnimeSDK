#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class PerformanceLiveStreamSwitchData; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_LIVESTREAMSWITCHCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8EA290)
#define RPGTOOLS_TIMELINE_LIVESTREAMSWITCHCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8EA280)
#define RPGTOOLS_TIMELINE_LIVESTREAMSWITCHCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8EA450)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int LiveStreamSwitchClip_TypeDefinitionIndex = 44924;

	class LiveStreamSwitchClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::PerformanceLiveStreamSwitchData* SwitchData; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSWITCHCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSWITCHCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_LIVESTREAMSWITCHCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
