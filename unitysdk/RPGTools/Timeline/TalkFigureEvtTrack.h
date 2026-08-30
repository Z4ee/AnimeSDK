#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_TALKFIGUREEVTTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BF29550)
#define RPGTOOLS_TIMELINE_TALKFIGUREEVTTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1BF29670)
#define RPGTOOLS_TIMELINE_TALKFIGUREEVTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BF29740)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int TalkFigureEvtTrack_TypeDefinitionIndex = 48840;

	class TalkFigureEvtTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKFIGUREEVTTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKFIGUREEVTTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_TALKFIGUREEVTTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
