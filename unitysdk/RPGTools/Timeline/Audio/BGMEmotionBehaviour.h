#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPGTools/Timeline/CustomEventBehaviour.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"

namespace System { class String; }

#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_METHOD_3_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x1B532BA0)
#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_METHOD_3_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1B532B60)
#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_METHOD_3_4A41C63BFE58D26F_OFFSET UNITYSDK_OFFSET(0x1B5325D0)
#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_METHOD_3_9E38127F40B34F1F_OFFSET UNITYSDK_OFFSET(0x1B532880)
#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0x1B532B00)
#define RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0x1B532BE0)

namespace RPGTools::Timeline::Audio
{
	inline static constexpr unsigned int BGMEmotionBehaviour_TypeDefinitionIndex = 49280;

	class BGMEmotionBehaviour : public ::RPGTools::Timeline::CustomEventBehaviour
	{
	public:
		::System::Boolean IsUseStoryState; // 0x20
		::System::String* StoryState; // 0x28
		::System::String* EmotionState; // 0x30
		::System::String* SoundEffectState; // 0x38
		::System::Boolean IsResetWhenClipExit; // 0x40

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_3_4A41C63BFE58D26F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_METHOD_3_4A41C63BFE58D26F_OFFSET))(this);
		}

		::System::Void Method_3_9E38127F40B34F1F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_METHOD_3_9E38127F40B34F1F_OFFSET))(this);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Boolean Method_3_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_METHOD_3_391A84BCD9F51317_OFFSET))(this);
		}

		::System::Boolean Method_3_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + RPGTOOLS_TIMELINE_AUDIO_BGMEMOTIONBEHAVIOUR_METHOD_3_391A84BCD9F51317_1_OFFSET))(this);
		}
	};
}
