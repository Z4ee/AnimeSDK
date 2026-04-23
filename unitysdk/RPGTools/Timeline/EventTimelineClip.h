#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class EventTimelineBehaviour; }
namespace RPGTools::Timeline { class TimelineEventArgument; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_EVENTTIMELINECLIP_AWAKE_OFFSET UNITYSDK_OFFSET(0xB8DB310)
#define RPGTOOLS_TIMELINE_EVENTTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xB8DB350)
#define RPGTOOLS_TIMELINE_EVENTTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xB8DB2F0)
#define RPGTOOLS_TIMELINE_EVENTTIMELINECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xB8DB300)
#define RPGTOOLS_TIMELINE_EVENTTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xB8DB550)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int EventTimelineClip_TypeDefinitionIndex = 45156;

	class EventTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::EventTimelineBehaviour* Template; // 0x18
		::RPGTools::Timeline::TimelineEventArgument* Argument; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINECLIP_GET_DURATION_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINECLIP_AWAKE_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EVENTTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
