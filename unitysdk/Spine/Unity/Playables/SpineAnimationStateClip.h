#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace Spine::Unity::Playables { class SpineAnimationStateBehaviour; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1D2B0E30)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1D2B0E00)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0x1D2B0F50)
#define SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D2B0FF0)

namespace Spine::Unity::Playables
{
	inline static constexpr unsigned int SpineAnimationStateClip_TypeDefinitionIndex = 42587;

	class SpineAnimationStateClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::Spine::Unity::Playables::SpineAnimationStateBehaviour* template_; // 0x18
		::UnityEngine::Timeline::TimelineClip* timelineClip; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + SPINE_UNITY_PLAYABLES_SPINEANIMATIONSTATECLIP_GET_DURATION_OFFSET))(this);
		}
	};
}
