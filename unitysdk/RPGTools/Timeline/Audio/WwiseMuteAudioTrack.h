#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEAUDIOTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE815CA0)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEAUDIOTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE815D50)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int WwiseMuteAudioTrack_TypeDefinitionIndex = 49301;

	class WwiseMuteAudioTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEAUDIOTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEMUTEAUDIOTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}
	};
}
