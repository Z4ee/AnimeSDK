#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define AKEVENTTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1EECA560)
#define AKEVENTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EECABC0)

inline static constexpr unsigned int AkEventTrack_TypeDefinitionIndex = 43736;

class AkEventTrack : public ::UnityEngine::Timeline::TrackAsset
{
public:
	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTTRACK__CTOR_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + AKEVENTTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
	}
};
