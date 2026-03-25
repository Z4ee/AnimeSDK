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

#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB367D0)
#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB369D0)
#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xAB369E0)
#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0xAB36A40)
#define RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB36AA0)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterFullBodyClip_TypeDefinitionIndex = 38812;

	class CharacterFullBodyClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double Start; // 0x18
		::System::Double End; // 0x20
		::Class_1_945ACFB1FEBC7A2C_17* Config; // 0x28
		::Il2CppArray<::RPGTools::Timeline::CharacterFullBodyChainData*>* Chains; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERFULLBODYCLIP__CTOR_OFFSET))(this);
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
