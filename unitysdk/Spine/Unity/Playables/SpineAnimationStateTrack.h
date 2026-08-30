#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1EFC0DC0)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC1410)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineAnimationStateTrack_TypeDefinitionIndex = 44772;

	class SpineAnimationStateTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Int32 trackIndex; // 0xC8
		::System::Boolean unscaledTime; // 0xCC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}
	};
}
