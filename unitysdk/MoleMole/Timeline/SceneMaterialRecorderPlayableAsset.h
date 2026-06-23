#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace MoleMole::Timeline { class SceneMaterialRecorderBehavior; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERPLAYABLEASSET_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1E6CC060)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERPLAYABLEASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1E6CC130)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERPLAYABLEASSET_GET_RECORDER_OFFSET UNITYSDK_OFFSET(0x1E6CC050)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERPLAYABLEASSET_INITDATA_OFFSET UNITYSDK_OFFSET(0x1E6CC140)
#define MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERPLAYABLEASSET__CTOR_OFFSET UNITYSDK_OFFSET(0x1E6CC150)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int SceneMaterialRecorderPlayableAsset_TypeDefinitionIndex = 32200;

	class SceneMaterialRecorderPlayableAsset : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::MoleMole::Timeline::SceneMaterialRecorderBehavior* recorder; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERPLAYABLEASSET__CTOR_OFFSET))(this);
		}

		::MoleMole::Timeline::SceneMaterialRecorderBehavior* get_Recorder()
		{
			return ((::MoleMole::Timeline::SceneMaterialRecorderBehavior*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERPLAYABLEASSET_GET_RECORDER_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERPLAYABLEASSET_CREATEPLAYABLE_OFFSET))(this, graph, go);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERPLAYABLEASSET_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Void InitData(::UnityEngine::GameObject* bindObj, ::UnityEngine::Timeline::TimelineClip* parentClip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_SCENEMATERIALRECORDERPLAYABLEASSET_INITDATA_OFFSET))(this, bindObj, parentClip);
		}
	};
}
