#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class ActiveVirtualCameraConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B52AE00)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B52B0F0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_GET_STREAMINGSOURCEINDEX_OFFSET UNITYSDK_OFFSET(0x1B52ADE0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_SET_STREAMINGSOURCEINDEX_OFFSET UNITYSDK_OFFSET(0x1B52ADF0)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B52B010)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0x1B52B090)
#define RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B52B100)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int ActiveVirtualCameraClip_TypeDefinitionIndex = 48272;

	class ActiveVirtualCameraClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double Start; // 0x18
		::System::Double End; // 0x20
		::System::Int32 _StreamingSourceIndex_k__BackingField; // 0x28
		::RPGTools::Timeline::ActiveVirtualCameraConfig* Config; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP__CTOR_OFFSET))(this);
		}

		::System::Int32 get_StreamingSourceIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_GET_STREAMINGSOURCEINDEX_OFFSET))(this);
		}

		::System::Void set_StreamingSourceIndex(::System::Int32 a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_SET_STREAMINGSOURCEINDEX_OFFSET))(this, a1);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ACTIVEVIRTUALCAMERACLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
