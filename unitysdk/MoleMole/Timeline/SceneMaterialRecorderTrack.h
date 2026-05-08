#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1BA17C20)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1BA17DA0)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1BA17E70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SceneMaterialRecorderTrack_TypeDefinitionIndex = 30655;

	class SceneMaterialRecorderTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERTRACK_CREATEPLAYABLE_OFFSET))(this, graph, go, clip);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::System::Int32 inputCount)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERTRACK_CREATETRACKMIXER_OFFSET))(this, graph, go, inputCount);
		}
	};
}
