#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace AK::Wwise { class Event; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define AKEVENTPLAYABLE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18BAB790)
#define AKEVENTPLAYABLE_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x18BAB780)
#define AKEVENTPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18BABCA0)

inline static constexpr unsigned int AkEventPlayable_TypeDefinitionIndex = 34661;

class AkEventPlayable : public ::UnityEngine::Playables::PlayableAsset
{
public:
	::AK::Wwise::Event* akEvent; // 0x18
	::AkCurveInterpolation blendInCurve; // 0x20
	::AkCurveInterpolation blendOutCurve; // 0x24
	::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> emitterObjectRef; // 0x28
	::System::Single eventDurationMax; // 0x38
	::System::Single eventDurationMin; // 0x3C
	::UnityEngine::Timeline::TimelineClip* owningClip; // 0x40
	::System::Boolean retriggerEvent; // 0x48
	::System::Boolean UseWwiseEventDuration; // 0x49
	::System::Boolean StopEventAtClipEnd; // 0x4A

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Timeline::ClipCaps UnityEngine_Timeline_ITimelineClipAsset_get_clipCaps()
	{
		return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLE_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKEVENTPLAYABLE_CREATEPLAYABLE_OFFSET))(this, graph, owner);
	}
};
