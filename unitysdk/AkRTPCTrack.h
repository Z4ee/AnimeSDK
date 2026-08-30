#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace AK::Wwise { class RTPC; }
namespace UnityEngine { class GameObject; }

#define AKRTPCTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1EEEC6C0)
#define AKRTPCTRACK_ONVALIDATE_OFFSET UNITYSDK_OFFSET(0x1EEECD70)
#define AKRTPCTRACK_SETPLAYABLEPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EEEC7D0)
#define AKRTPCTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EEED310)

inline static constexpr unsigned int AkRTPCTrack_TypeDefinitionIndex = 43750;

class AkRTPCTrack : public ::UnityEngine::Timeline::TrackAsset
{
public:
	::AK::Wwise::RTPC* Parameter; // 0xC8

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCTRACK__CTOR_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + AKRTPCTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
	}

	::System::Void setPlayableProperties()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCTRACK_SETPLAYABLEPROPERTIES_OFFSET))(this);
	}

	::System::Void OnValidate()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCTRACK_ONVALIDATE_OFFSET))(this);
	}
};
