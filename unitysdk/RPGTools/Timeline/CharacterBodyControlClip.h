#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CharacterBodyControlData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFEB7E0)
#define RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xCFEB970)
#define RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xCFEB980)
#define RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0xCFEB9E0)
#define RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFEBA40)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterBodyControlClip_TypeDefinitionIndex = 45240;

	class CharacterBodyControlClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double Start; // 0x18
		::System::Double End; // 0x20
		::RPGTools::Timeline::CharacterBodyControlData* Config; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERBODYCONTROLCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}
	};
}
