#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

class AkTimelineRtpcPlayableBehaviour;
namespace AK::Wwise { class RTPC; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define AKTIMELINERTPCPLAYABLE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x18C2CC50)
#define AKTIMELINERTPCPLAYABLE_GET_OWNINGCLIP_OFFSET UNITYSDK_OFFSET(0x18C2CC20)
#define AKTIMELINERTPCPLAYABLE_SETUPCLIPDISPLAY_OFFSET UNITYSDK_OFFSET(0x18C2CBE0)
#define AKTIMELINERTPCPLAYABLE_SET_OWNINGCLIP_OFFSET UNITYSDK_OFFSET(0x18C2CC30)
#define AKTIMELINERTPCPLAYABLE_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x18C2CC40)
#define AKTIMELINERTPCPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x18C2CE60)

inline static constexpr unsigned int AkTimelineRtpcPlayable_TypeDefinitionIndex = 34615;

class AkTimelineRtpcPlayable : public ::UnityEngine::Playables::PlayableAsset
{
public:
	::AK::Wwise::RTPC* RTPC; // 0x18
	::System::Boolean setGlobally; // 0x20
	::AkTimelineRtpcPlayableBehaviour* template_; // 0x28
	::UnityEngine::Timeline::TimelineClip* _owningClip_k__BackingField; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLE__CTOR_OFFSET))(this);
	}

	::System::Void SetupClipDisplay()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLE_SETUPCLIPDISPLAY_OFFSET))(this);
	}

	::UnityEngine::Timeline::TimelineClip* get_owningClip()
	{
		return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLE_GET_OWNINGCLIP_OFFSET))(this);
	}

	::System::Void set_owningClip(::UnityEngine::Timeline::TimelineClip* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLE_SET_OWNINGCLIP_OFFSET))(this, value);
	}

	::UnityEngine::Timeline::ClipCaps UnityEngine_Timeline_ITimelineClipAsset_get_clipCaps()
	{
		return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLE_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* gameObject)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKTIMELINERTPCPLAYABLE_CREATEPLAYABLE_OFFSET))(this, graph, gameObject);
	}
};
