#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define AKTIMELINERTPCTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1FBE0BC0)
#define AKTIMELINERTPCTRACK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1FBE0D60)
#define AKTIMELINERTPCTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1FBE0E70)

inline static constexpr unsigned int AkTimelineRtpcTrack_TypeDefinitionIndex = 33739;

class AkTimelineRtpcTrack : public ::UnityEngine::Timeline::TrackAsset
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCTRACK__CTOR_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::System::Int32 inputCount)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + AKTIMELINERTPCTRACK_CREATETRACKMIXER_OFFSET))(this, graph, gameObject, inputCount);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCTRACK_ONVALIDATE_OFFSET))(this);
	}
};
