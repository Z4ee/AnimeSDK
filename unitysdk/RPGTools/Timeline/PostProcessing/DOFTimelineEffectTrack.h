#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB8AE80)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0xAB8B060)
#define RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0xAB8B140)

namespace RPGTools::Timeline::PostProcessing
{
	inline static constexpr unsigned int DOFTimelineEffectTrack_TypeDefinitionIndex = 39372;

	class DOFTimelineEffectTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Boolean AutoReset; // 0xC8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::System::Int32 P2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_POSTPROCESSING_DOFTIMELINEEFFECTTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, P0, P1, P2);
		}
	};
}
