#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE818E70)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE818D90)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADECLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xE818DA0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADECLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0xE818E10)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE819000)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterAnimCrossFadeClip_TypeDefinitionIndex = 49248;

	class BPCharacterAnimCrossFadeClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* StateName; // 0x20
		::System::Single TransitionDuration; // 0x28
		::System::Int32 LayerIndex; // 0x2C
		::System::Single Offset; // 0x30
		::System::Boolean FixedTransition; // 0x34
		::System::Boolean ForceStart; // 0x35
		::System::Collections::Generic::List_1<::System::String*>* _StateNames; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADECLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADECLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADECLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERANIMCROSSFADECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
