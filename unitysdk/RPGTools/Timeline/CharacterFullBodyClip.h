#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

class Class_1_945ACFB1FEBC7A2C_17;
namespace RPGTools::Timeline { class CharacterFullBodyChainData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B3573C0)
#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_GET_CHAINS_OFFSET UNITYSDK_OFFSET(0x1B357200)
#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B357540)
#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x1B357550)
#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0x1B3575B0)
#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B357610)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterFullBodyClip_TypeDefinitionIndex = 46186;

	class CharacterFullBodyClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double Start; // 0x18
		::System::Double End; // 0x20
		::Class_1_945ACFB1FEBC7A2C_17* Config; // 0x28
		::System::Boolean IsInitialized; // 0x30
		::RPGTools::Timeline::CharacterFullBodyChainData* LeftArm; // 0x38
		::RPGTools::Timeline::CharacterFullBodyChainData* RightArm; // 0x40
		::RPGTools::Timeline::CharacterFullBodyChainData* LeftLeg; // 0x48
		::RPGTools::Timeline::CharacterFullBodyChainData* RightLeg; // 0x50
		::System::String* LeftArmBoneName; // 0x58
		::System::String* RightArmBoneName; // 0x60
		::System::String* LeftLegBoneName; // 0x68
		::System::String* RightLegBoneName; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP__CTOR_OFFSET))(this);
		}

		::Il2CppArray<::RPGTools::Timeline::CharacterFullBodyChainData*>* get_Chains()
		{
			return ((::Il2CppArray<::RPGTools::Timeline::CharacterFullBodyChainData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_GET_CHAINS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}
	};
}
