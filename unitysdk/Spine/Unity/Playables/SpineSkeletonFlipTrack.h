#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/TrackAsset.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Playables { class PlayableDirector; }
namespace UnityEngine::Timeline { class IPropertyCollector; }

#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK_CREATETRACKMIXER_OFFSET UNITYSDK_OFFSET(0x1EFC1FB0)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK_GATHERPROPERTIES_OFFSET UNITYSDK_OFFSET(0x1EFC2040)
#define SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1EFC2050)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineSkeletonFlipTrack_TypeDefinitionIndex = 44774;

	class SpineSkeletonFlipTrack : public ::UnityEngine::Timeline::TrackAsset
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreateTrackMixer(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2, ::System::Int32 a3)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::System::Int32))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK_CREATETRACKMIXER_OFFSET))(this, a1, a2, a3);
		}

		::System::Void GatherProperties(::UnityEngine::Playables::PlayableDirector* a1, ::UnityEngine::Timeline::IPropertyCollector* a2)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableDirector*, ::UnityEngine::Timeline::IPropertyCollector*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINESKELETONFLIPTRACK_GATHERPROPERTIES_OFFSET))(this, a1, a2);
		}
	};
}
