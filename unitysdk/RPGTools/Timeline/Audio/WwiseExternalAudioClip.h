#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Playables/PlayableAsset.h"
#include "unitysdk/UnityEngine/Playables/PlayableGraph.h"
#include "unitysdk/UnityEngine/Timeline/ClipCaps.h"

namespace RPGTools::Timeline::Audio { class WwiseExternalAudioConfig; }
namespace UnityEngine { class GameObject; }

#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP_CREATEPLAYABLE_OFFSET UNITYSDK_OFFSET(0x1B344DD0)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP_GET_CLIPCAPS_OFFSET UNITYSDK_OFFSET(0x1B344DC0)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP_GET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1B344DA0)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP_METHOD_4_4307B2A4B4A12C1A_OFFSET UNITYSDK_OFFSET(0x1B344F40)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP_SET_ENDTIME_OFFSET UNITYSDK_OFFSET(0x1B344DB0)
#define RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP__CTOR_OFFSET UNITYSDK_OFFSET(0x1B345050)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int WwiseExternalAudioClip_TypeDefinitionIndex = 47035;

	class WwiseExternalAudioClip : public ::UnityEngine::Playables::PlayableAsset
	{
	public:
		::RPGTools::Timeline::Audio::WwiseExternalAudioConfig* Config; // 0x18
		::System::Boolean ExecuteWhenSkip; // 0x20
		::System::Double _EndTime_k__BackingField; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP__CTOR_OFFSET))(this);
		}

		::System::Double get_EndTime()
		{
			return ((::System::Double(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP_GET_ENDTIME_OFFSET))(this);
		}

		::System::Void set_EndTime(::System::Double a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Double))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP_SET_ENDTIME_OFFSET))(this, a1);
		}

		::UnityEngine::Timeline::ClipCaps get_clipCaps()
		{
			return ((::UnityEngine::Timeline::ClipCaps(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP_GET_CLIPCAPS_OFFSET))(this);
		}

		::UnityEngine::Playables::Playable CreatePlayable(::UnityEngine::Playables::PlayableGraph a1, ::UnityEngine::GameObject* a2)
		{
			return ((::UnityEngine::Playables::Playable(*)(::PVOID, ::UnityEngine::Playables::PlayableGraph, ::UnityEngine::GameObject*))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP_CREATEPLAYABLE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_4307B2A4B4A12C1A()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_WWISEEXTERNALAUDIOCLIP_METHOD_4_4307B2A4B4A12C1A_OFFSET))(this);
		}
	};
}
