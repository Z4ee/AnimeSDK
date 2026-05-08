#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define AKTIMELINEEVENTTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1C464CC0)
#define AKTIMELINEEVENTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1C464E80)

inline static constexpr unsigned int AkTimelineEventTrack_TypeDefinitionIndex = 31550;

class AkTimelineEventTrack : public ::UnityEngine::Timeline::TrackAsset
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTTRACK__CTOR_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTTRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
	}
};
