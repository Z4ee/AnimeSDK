#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline { class CharacterStopFullBodyChainData; }
namespace RPGTools::Timeline { class CharacterStopFullBodyData; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::Timeline { class TimelineClip; }

#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xCFF33C0)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xCFF3530)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0xCFF3540)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET UNITYSDK_OFFSET(0xCFF35C0)
#define RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xCFF3620)

namespace RPGTools::Timeline
{
	inline static constexpr unsigned int CharacterStopFullBodyClip_TypeDefinitionIndex = 45268;

	class CharacterStopFullBodyClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Double Start; // 0x18
		::System::Double End; // 0x20
		::RPGTools::Timeline::CharacterStopFullBodyData* Config; // 0x28
		::Il2CppArray<::RPGTools::Timeline::CharacterStopFullBodyChainData*>* Chains; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCLIP__CTOR_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDisplayName(::UnityEngine::Timeline::TimelineClip* a1, ::System::String*& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::String*&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDISPLAYNAME_OFFSET))(this, a1, a2);
		}

		::System::Boolean UnityEngine_Timeline_ICustomTimelineClipGUI_OverrideDuration(::UnityEngine::Timeline::TimelineClip* a1, ::System::Double& a2)
		{
			return ((::System::Boolean(*)(::PVOID, ::UnityEngine::Timeline::TimelineClip*, ::System::Double&))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_CHARACTERSTOPFULLBODYCLIP_UNITYENGINE_TIMELINE_ICUSTOMTIMELINECLIPGUI_OVERRIDEDURATION_OFFSET))(this, a1, a2);
		}
	};
}
