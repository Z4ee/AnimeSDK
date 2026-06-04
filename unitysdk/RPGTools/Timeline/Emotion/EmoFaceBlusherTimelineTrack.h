#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/Emotion/BaseEmoTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD016B00)
#define RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xD016AF0)
#define RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xD016C80)
#define RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD016D80)
#define RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xD016E60)
#define RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xD016F00)

namespace RPGTools::Timeline::Emotion
{
	inline static constexpr unsigned int EmoFaceBlusherTimelineTrack_TypeDefinitionIndex = 46047;

	class EmoFaceBlusherTimelineTrack : public ::RPGTools::Timeline::Emotion::BaseEmoTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void __iFixBaseProxy_OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_EMOTION_EMOFACEBLUSHERTIMELINETRACK___IFIXBASEPROXY_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
