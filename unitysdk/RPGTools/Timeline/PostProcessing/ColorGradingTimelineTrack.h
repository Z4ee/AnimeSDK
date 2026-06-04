#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/PostProcessing/PostProcessTimelineTrack.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINETRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD03E860)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xD03E910)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINETRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xD03E920)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int ColorGradingTimelineTrack_TypeDefinitionIndex = 45829;

	class ColorGradingTimelineTrack : public ::RPGTools::Timeline::PostProcessing::PostProcessTimelineTrack
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINETRACK_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::UnityEngine::Timeline::TimelineClip* a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_COLORGRADINGTIMELINETRACK___IFIXBASEPROXY_CREATEPLAYABLE_OFFSET))(this, a1, a2, a3);
		}
	};
}
