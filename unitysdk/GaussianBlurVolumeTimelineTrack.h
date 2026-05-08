#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define GAUSSIANBLURVOLUMETIMELINETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1040EB20)
#define GAUSSIANBLURVOLUMETIMELINETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1040F560)
#define GAUSSIANBLURVOLUMETIMELINETRACK___BASE_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1040F5C0)

inline static constexpr unsigned int GaussianBlurVolumeTimelineTrack_TypeDefinitionIndex = 71045;

class GaussianBlurVolumeTimelineTrack : public ::UnityEngine::Timeline::TrackAsset
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINETRACK__CTOR_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINETRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
	}

	::UnityEngine::Playables::Playable __base_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph P0, ::UnityEngine::GameObject* P1, ::System::Int32 P2)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + GAUSSIANBLURVOLUMETIMELINETRACK___BASE_CREATETRACKMIXER_OFFSET))(this, P0, P1, P2);
	}
};
