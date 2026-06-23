#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1DD94DD0)
#define MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD95340)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int MultiGameObjectPosTrack_TypeDefinitionIndex = 32228;

	class MultiGameObjectPosTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_MULTIGAMEOBJECTPOSTRACK_CREATEPLAYABLE_OFFSET))(this, graph, gameObject, clip);
		}
	};
}
