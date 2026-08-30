#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xE862F20)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYTRACK_ONCREATECLIP_OFFSET UNITYSDK_OFFSET(0xE8630A0)
#define RPGTOOLS_TIMELINE_HIDEPROPFORSTORYTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xE863110)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int HidePropForStoryTrack_TypeDefinitionIndex = 48603;

	class HidePropForStoryTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void OnCreateClip(::UnityEngine::Timeline::TimelineClip* a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_HIDEPROPFORSTORYTRACK_ONCREATECLIP_OFFSET))(this, a1);
		}
	};
}
