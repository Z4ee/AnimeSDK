#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE8EF490)
#define RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE8EF590)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int StoryPropAnimatorParamTrack_TypeDefinitionIndex = 48696;

	class StoryPropAnimatorParamTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_STORYPROPANIMATORPARAMTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}
	};
}
