#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }

#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1E6AC120)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6AC680)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineAnimationStateTrack_TypeDefinitionIndex = 91418;

	class SpineAnimationStateTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Int32 trackIndex; // 0xB0
		::System::Boolean unscaledTime; // 0xB4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATETRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}
	};
}
