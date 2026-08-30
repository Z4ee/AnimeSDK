#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_TIMELINEACTIVITYTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BF2B540)
#define RPGTOOLS_TIMELINE_TIMELINEACTIVITYTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF2B5F0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TimelineActivityTrack_TypeDefinitionIndex = 48257;

	class TimelineActivityTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEACTIVITYTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TIMELINEACTIVITYTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}
	};
}
