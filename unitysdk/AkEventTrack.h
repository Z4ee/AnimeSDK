#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define AKEVENTTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B4326E0)
#define AKEVENTTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1B432BB0)
#define AKEVENTTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1B432C90)

inline static constexpr unsigned int AkEventTrack_TypeDefinitionIndex = 41310;

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

	::UnityEngine::Playables::Playable __iFixBaseProxy_CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + AKEVENTTRACK___IFIXBASEPROXY_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
	}
};
