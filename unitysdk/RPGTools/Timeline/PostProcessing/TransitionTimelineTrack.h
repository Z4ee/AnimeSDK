#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B0B5840)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B0B59F0)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int TransitionTimelineTrack_TypeDefinitionIndex = 49082;

	class TransitionTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Boolean AutoReset; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_TRANSITIONTIMELINETRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
