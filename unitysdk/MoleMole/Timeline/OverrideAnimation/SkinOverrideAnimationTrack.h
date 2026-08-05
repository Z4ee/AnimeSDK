#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/AnimationTrack.h"

namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_SKINOVERRIDEANIMATIONTRACK_PREPOSTPROCESSTRACK_OFFSET UNITYSDK_OFFSET(0x1F112250)
#define MOLEMOLE_TIMELINE_OVERRIDEANIMATION_SKINOVERRIDEANIMATIONTRACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1F1124B0)

namespace MoleMole::Timeline::OverrideAnimation
{
	inline static constexpr unsigned int SkinOverrideAnimationTrack_TypeDefinitionIndex = 32865;

	class SkinOverrideAnimationTrack : public ::UnityEngine::Timeline::AnimationTrack
	{
	public:
		::System::Int32 unitId; // 0x150

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_SKINOVERRIDEANIMATIONTRACK__CTOR_OFFSET))(this);
		}

		::System::Void PrePostProcessTrack(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject, ::UnityEngine::Timeline::TimelineClip* clip)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_OVERRIDEANIMATION_SKINOVERRIDEANIMATIONTRACK_PREPOSTPROCESSTRACK_OFFSET))(this, graph, gameObject, clip);
		}
	};
}
