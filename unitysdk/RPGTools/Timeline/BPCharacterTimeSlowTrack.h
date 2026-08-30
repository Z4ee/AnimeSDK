#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE817470)
#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE8175B0)
#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET UNITYSDK_OFFSET(0xE8173F0)
#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xE817400)
#define RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE817730)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int BPCharacterTimeSlowTrack_TypeDefinitionIndex = 48265;

	class BPCharacterTimeSlowTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWTRACK__CTOR_OFFSET))(this);
		}

		::System::Boolean get_UseUniqueCharacterName()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWTRACK_GET_USEUNIQUECHARACTERNAME_OFFSET))(this);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWTRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BPCHARACTERTIMESLOWTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
