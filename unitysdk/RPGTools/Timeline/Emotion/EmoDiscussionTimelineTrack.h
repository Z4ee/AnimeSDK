#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CharacterTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB5E970)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB5EA70)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB5E900)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAB5EB90)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB5EC80)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB5ECC0)
#define RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xAB5EC70)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoDiscussionTimelineTrack_TypeDefinitionIndex = 39543;

	class EmoDiscussionTimelineTrack : public ::RPGTools::Timeline::CharacterTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* P0)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, P0);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::UnityEngine::Timeline::TimelineClip* P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, P0, P1, P2);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::System::Int32 P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMODISCUSSIONTIMELINETRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, P0, P1, P2);
		}
	};
}
