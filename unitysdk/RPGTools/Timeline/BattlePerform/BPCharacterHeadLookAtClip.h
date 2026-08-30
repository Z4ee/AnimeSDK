#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1D12D9A0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1D12D8B0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D12D8C0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0x1D12D940)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D12DB30)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterHeadLookAtClip_TypeDefinitionIndex = 49262;

	class BPCharacterHeadLookAtClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::System::String* TargetCharacterUniqueName; // 0x20
		::System::String* TargetCharacterAttachPoint; // 0x28
		::System::String* TargetAreaName; // 0x30
		::System::String* TargetAnchorName; // 0x38
		::System::Single Duration; // 0x40
		::System::String* CurveName; // 0x48
		::System::Boolean IgnoreConstraint; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERHEADLOOKATCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
