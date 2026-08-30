#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE84B410)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE84B290)
#define RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE84B550)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int DiscussionEyeCtrlTrack_TypeDefinitionIndex = 49178;

	class DiscussionEyeCtrlTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_DISCUSSIONEYECTRLTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}
	};
}
