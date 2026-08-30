#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::BattlePerform { class BPCharacterFullBodyChainData; }
namespace RPGTools::Timeline::BattlePerform { class BPCharacterFullBodyData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xE81A0E0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP_GET_CHAINS_OFFSET UNITYSDK_OFFSET(0xE819620)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xE81A0D0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xE81A270)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0xE81A2F0)
#define RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xE81A350)

namespace RPGTools::Timeline::BattlePerform
{
	inline static constexpr unsigned int BPCharacterFullBodyClip_TypeDefinitionIndex = 49252;

	class BPCharacterFullBodyClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::String* CharacterUniqueName; // 0x18
		::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyData* Config; // 0x20
		::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData* LeftArm; // 0x28
		::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData* RightArm; // 0x30
		::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData* LeftLeg; // 0x38
		::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData* RightLeg; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>* get_Chains()
		{
			return ((::Il2CppArray<::RPGTools::Timeline::BattlePerform::BPCharacterFullBodyChainData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP_GET_CHAINS_OFFSET))(this);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_BATTLEPERFORM_BPCHARACTERFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}
	};
}
