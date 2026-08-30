#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::BattlePerform { class BPCameraConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1D12AF10)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1D12AE20)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_END_OFFSET UNITYSDK_OFFSET(0x1D12AE00)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_START_OFFSET UNITYSDK_OFFSET(0x1D12ADE0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_SET_END_OFFSET UNITYSDK_OFFSET(0x1D12AE10)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_SET_START_OFFSET UNITYSDK_OFFSET(0x1D12ADF0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1D12AE30)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0x1D12AEB0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1D12B0A0)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCameraClip_TypeDefinitionIndex = 49244;

	class BPCameraClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::BattlePerform::BPCameraConfig* Config; // 0x18
		::System::Double _Start_k__BackingField; // 0x20
		::System::Double _End_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP__CTOR_OFFSET))(this);
		}

		::System::Double get_Start()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_START_OFFSET))(this);
		}

		::System::Void set_Start(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_SET_START_OFFSET))(this, a1);
		}

		::System::Double get_End()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_END_OFFSET))(this);
		}

		::System::Void set_End(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_SET_END_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCAMERACLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
