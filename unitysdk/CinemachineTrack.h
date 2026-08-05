#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define CINEMACHINETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1FBFA4D0)
#define CINEMACHINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBFA7F0)

inline static constexpr unsigned int CinemachineTrack_TypeDefinitionIndex = 34639;

class CinemachineTrack : public ::UnityEngine::Timeline::TrackAsset
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CINEMACHINETRACK__CTOR_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + CINEMACHINETRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
	}
};
