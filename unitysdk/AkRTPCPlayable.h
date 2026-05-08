#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ExposedReference_1.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

class AkRTPCPlayableBehaviour;
namespace AK::Wwise { class RTPC; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define AKRTPCPLAYABLE_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1C3D66D0)
#define AKRTPCPLAYABLE_GET_OWNINGCLIP_OFFSET UNITYSDK_OFFSET(0x1C3D66A0)
#define AKRTPCPLAYABLE_GET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1C3D6680)
#define AKRTPCPLAYABLE_SET_OWNINGCLIP_OFFSET UNITYSDK_OFFSET(0x1C3D66B0)
#define AKRTPCPLAYABLE_SET_PARAMETER_OFFSET UNITYSDK_OFFSET(0x1C3D6690)
#define AKRTPCPLAYABLE_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1C3D66C0)
#define AKRTPCPLAYABLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1C3D68E0)

inline static constexpr unsigned int AkRTPCPlayable_TypeDefinitionIndex = 31611;

class AkRTPCPlayable : public ::UnityEngine::Playables::PlayableAsset
{
public:
	::System::Boolean overrideTrackObject; // 0x18
	::UnityEngine::ExposedReference_1<::UnityEngine::GameObject*> RTPCObject; // 0x20
	::System::Boolean setRTPCGlobally; // 0x30
	::AkRTPCPlayableBehaviour* template_; // 0x38
	::AK::Wwise::RTPC* _Parameter_k__BackingField; // 0x40
	::UnityEngine::Timeline::TimelineClip* _OwningClip_k__BackingField; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLE__CTOR_OFFSET))(this);
	}

	::AK::Wwise::RTPC* get_Parameter()
	{
		return ((::AK::Wwise::RTPC*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLE_GET_PARAMETER_OFFSET))(this);
	}

	::System::Void set_Parameter(::AK::Wwise::RTPC* value)
	{
		return ((::System::Void(*)(::PVOID, ::AK::Wwise::RTPC*))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLE_SET_PARAMETER_OFFSET))(this, value);
	}

	::UnityEngine::Timeline::TimelineClip* get_OwningClip()
	{
		return ((::UnityEngine::Timeline::TimelineClip*(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLE_GET_OWNINGCLIP_OFFSET))(this);
	}

	::System::Void set_OwningClip(::UnityEngine::Timeline::TimelineClip* value)
	{
		return ((::System::Void(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLE_SET_OWNINGCLIP_OFFSET))(this, value);
	}

	::UnityEngine::Timeline::ClipCaps UnityEngine_Timeline_ITimelineClipAsset_get_clipCaps()
	{
		return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLE_UNITYENGINE_TIMELINE_ITIMELINECLIPASSET_GET_CLIPCAPS_OFFSET))(this);
	}

	::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph graph, ::UnityEngine::GameObject* go)
	{
		return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + AKRTPCPLAYABLE_CREATEPLAYABLE_OFFSET))(this, graph, go);
	}
};
