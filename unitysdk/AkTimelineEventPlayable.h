#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/AkCurveInterpolation.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace AK::Wwise { class Event; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define AKTIMELINEEVENTPLAYABLE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1A664290)
#define AKTIMELINEEVENTPLAYABLE_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1A664280)
#define AKTIMELINEEVENTPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1A664940)

inline static constexpr unsigned int AkTimelineEventPlayable_TypeDefinitionIndex = 40431;

class AkTimelineEventPlayable : public ::UnityEngine::Playables::PlayableAsset
{
public:
	::AK::Wwise::Event* akEvent; // 0x18
	::AkCurveInterpolation blendInCurve; // 0x20
	::AkCurveInterpolation blendOutCurve; // 0x24
	::System::Single eventDurationMax; // 0x28
	::System::Single eventDurationMin; // 0x2C
	::UnityEngine::Timeline::TimelineClip* owningClip; // 0x30
	::System::Boolean retriggerEvent; // 0x38
	::System::Boolean UseWwiseEventDuration; // 0x39
	::System::Boolean PrintDebugInformation; // 0x3A
	::System::Boolean StopEventAtClipEnd; // 0x3B

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLE__CTOR_OFFSET))(this);
	}

	::UnityEngine::Timeline::ClipCaps UnityEngine_Timeline_ITimelineClipAsset_get_clipCaps()
	{
		return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLE_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* owner)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKTIMELINEEVENTPLAYABLE_CREATEPLAYABLE_OFFSET))(this, graph, owner);
	}
};
