#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace UnityEngine { class AnimationCurve; }

#define MOLEMOLE_PRIVATEMESSAGEPARAMS_AWAKE_OFFSET UNITYSDK_OFFSET(0x17DE09C0)
#define MOLEMOLE_PRIVATEMESSAGEPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x17DE0BA0)

namespace MoleMole
{
	inline static constexpr unsigned int PrivateMessageParams_TypeDefinitionIndex = 82491;

	class PrivateMessageParams : public ::UnityEngine::MonoBehaviour
	{
	public:
		::System::Single AnimationOffset; // 0x18
		::System::Single VoiceDelay; // 0x1C
		::System::Single ScrollLerp; // 0x20
		::System::Single BubbleWaitQuickText; // 0x24
		::System::Single SpeedRadio; // 0x28
		::System::Single CharacterRadio; // 0x2C
		::UnityEngine::AnimationCurve* ReadSpeedCurve; // 0x30
		::Il2CppArray<::System::Single>* OtherReadSpeedRatios; // 0x38
		::System::Single MaxVoiceLength; // 0x40
		::UnityEngine::AnimationCurve* VoiceLengthCurve; // 0x48
		::System::Single WaitNextReplyTime; // 0x50
		::System::Single ReplyFinishTime; // 0x54
		::System::Single HistoryScrollLen; // 0x58
		::System::Single HistoryEffectTime; // 0x5C
		::System::Single BubbleShowTime; // 0x60
		::System::Single MessageWaitTime; // 0x64
		::System::Single FinishShowTime; // 0x68
		::System::Single AutoCloseTime; // 0x6C
		::UnityEngine::Color ColorReplyEmoji; // 0x70
		::UnityEngine::Color ColorAgency; // 0x80
		::UnityEngine::Color ColorUnreadVoice; // 0x90
		::UnityEngine::Color ColorVoiceImg; // 0xA0
		::UnityEngine::Color ColorPressedText; // 0xB0
		::UnityEngine::Color ColorTextDefault; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRIVATEMESSAGEPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void Awake()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_PRIVATEMESSAGEPARAMS_AWAKE_OFFSET))(this);
		}
	};
}
