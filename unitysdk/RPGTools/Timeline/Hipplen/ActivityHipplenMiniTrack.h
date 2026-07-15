#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomUniqueNameTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_HIPPLEN_ACTIVITYHIPPLENMINITRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x19A603F0)
#define RPGTOOLS_TIMELINE_HIPPLEN_ACTIVITYHIPPLENMINITRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x19A60520)

namespace RPGTools::Timeline::Hipplen
{
	inline static constexpr unsigned int ActivityHipplenMiniTrack_TypeDefinitionIndex = 46855;

	class ActivityHipplenMiniTrack : public ::RPGTools::Timeline::CustomUniqueNameTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_ACTIVITYHIPPLENMINITRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIPPLEN_ACTIVITYHIPPLENMINITRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}
	};
}
