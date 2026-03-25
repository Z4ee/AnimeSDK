#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace System { class String; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0xAB22810)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0xAB227F0)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP_GET_DURATION_OFFSET UNITYSDK_OFFSET(0xAB22800)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP_GET_ISPLAYERINVOLVED_OFFSET UNITYSDK_OFFSET(0xAB227D0)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP_SET_ISPLAYERINVOLVED_OFFSET UNITYSDK_OFFSET(0xAB227E0)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP__CTOR_OFFSET UNITYSDK_OFFSET(0xAB229F0)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int WwiseEventTimelineClip_TypeDefinitionIndex = 39597;

	class WwiseEventTimelineClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::System::Boolean DialogueAudio; // 0x18
		::System::Boolean UseExternalSource; // 0x19
		::System::Boolean ClearOnSkip; // 0x1A
		::System::String* EventName; // 0x20
		::System::String* ExternalSourceName; // 0x28
		::System::Boolean IsExternalSourceVO; // 0x30
		::System::UInt32 DialogueStoryID; // 0x34
		::System::Boolean _IsPlayerInvolved_k__BackingField; // 0x38
		::System::Double _AudioDuration; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsPlayerInvolved()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP_GET_ISPLAYERINVOLVED_OFFSET))(this);
		}

		::System::Void set_IsPlayerInvolved(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP_SET_ISPLAYERINVOLVED_OFFSET))(this, value);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::System::Double get_duration()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP_GET_DURATION_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEVENTTIMELINECLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}
	};
}
