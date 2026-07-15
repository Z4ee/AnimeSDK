#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class ActivityFireNotifyWithIntArgBehaviour; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19D6C4B0)
#define RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x19D6C5A0)
#define RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D6C5B0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ActivityFireNotifyWithIntArgClip_TypeDefinitionIndex = 46025;

	class ActivityFireNotifyWithIntArgClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::ActivityFireNotifyWithIntArgBehaviour* template_; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVITYFIRENOTIFYWITHINTARGCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
