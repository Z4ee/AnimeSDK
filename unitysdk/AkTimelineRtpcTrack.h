#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define AKTIMELINERTPCTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B6E0900)
#define AKTIMELINERTPCTRACK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1B6E0F70)
#define AKTIMELINERTPCTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6E1530)

inline static constexpr unsigned int AkTimelineRtpcTrack_TypeDefinitionIndex = 42077;

class AkTimelineRtpcTrack : public ::UnityEngine::Timeline::TrackAsset
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCTRACK__CTOR_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + AKTIMELINERTPCTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCTRACK_ONVALIDATE_OFFSET))(this);
	}
};
