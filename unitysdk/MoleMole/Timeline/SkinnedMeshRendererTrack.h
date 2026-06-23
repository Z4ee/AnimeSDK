#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERTRACK_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1DD5CBA0)
#define MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5CE70)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SkinnedMeshRendererTrack_TypeDefinitionIndex = 32220;

	class SkinnedMeshRendererTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SKINNEDMESHRENDERERTRACK_CREATEPLAYABLE_OFFSET))(this, graph, go, clip);
		}
	};
}
