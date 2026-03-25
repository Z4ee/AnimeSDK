#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define CINEMACHINE_TIMELINE_CINEMACHINETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x119DC930)
#define CINEMACHINE_TIMELINE_CINEMACHINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x119DCA20)

namespace Cinemachine::Timeline
{
	inline static constexpr unsigned int CinemachineTrack_TypeDefinitionIndex = 30925;

	class CinemachineTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINE_TIMELINE_CINEMACHINETRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}
	};
}
