#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/PostProcessTimelineTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINETRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB87B90)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAB87C40)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINETRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB87D20)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ChromaticAberrationTimelineTrack_TypeDefinitionIndex = 39359;

	class ChromaticAberrationTimelineTrack : public ::RPGTools::Timeline::PostProcessing::PostProcessTimelineTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINETRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::UnityEngine::Timeline::TimelineClip* P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_CHROMATICABERRATIONTIMELINETRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, P0, P1, P2);
		}
	};
}
