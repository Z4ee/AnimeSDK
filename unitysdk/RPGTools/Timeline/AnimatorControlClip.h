#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class AniamtorControlConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB1DD50)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB1E110)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xAB1DF30)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0xAB1E0B0)
#define RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB1E120)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int AnimatorControlClip_TypeDefinitionIndex = 38712;

	class AnimatorControlClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean UseMultipleConfigs; // 0x18
		::RPGTools::Timeline::AniamtorControlConfig* Config; // 0x20
		::System::Collections::Generic::List_1<::RPGTools::Timeline::AniamtorControlConfig*>* Configs; // 0x28
		::System::Single Start; // 0x30
		::System::Single Duration; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_ANIMATORCONTROLCLIP_GET_CLIPCAPS_OFFSET))(this);
		}
	};
}
