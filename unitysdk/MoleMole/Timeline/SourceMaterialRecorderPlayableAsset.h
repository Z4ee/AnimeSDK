#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class SourceMaterialRecorderBehavior; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }
namespace UnityEngine::Timeline { class AnimationTrack; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1DD5CF20)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1DD5CED0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERPLAYABLEASSET_INITDATA_OFFSET UNITYSDK_OFFSET(0x1DD5CEE0)
#define MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1DD5CFF0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SourceMaterialRecorderPlayableAsset_TypeDefinitionIndex = 32204;

	class SourceMaterialRecorderPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::SourceMaterialRecorderBehavior* Recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void InitData(::UnityEngine::Material* sourceMaterial, ::UnityEngine::Timeline::AnimationTrack* animationTrack, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Material*, ::UnityEngine::Timeline::AnimationTrack*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERPLAYABLEASSET_INITDATA_OFFSET))(this, sourceMaterial, animationTrack, clip);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SOURCEMATERIALRECORDERPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}
	};
}
