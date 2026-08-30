#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/MonoBehaviour.h"

namespace RPG::Client { class AnimatorButton; }
namespace RPG::Client { class RPGFadeAnimation; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSettleConfirmResultControl; }
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSettleConfirmViewModel; }
namespace UnityEngine { class Animation; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL_GET_CONTENT_OFFSET UNITYSDK_OFFSET(0xCA05AF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL_PLAYANIMATION_OFFSET UNITYSDK_OFFSET(0xCA05EF0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL_SET_CONTENT_OFFSET UNITYSDK_OFFSET(0xCA05B30)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL__CTOR_OFFSET UNITYSDK_OFFSET(0xCA05F60)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL__REFRESH_OFFSET UNITYSDK_OFFSET(0xCA05B90)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSettleConfirmControl_TypeDefinitionIndex = 80216;

	class ChallengeTierceSettleConfirmControl : public ::UnityEngine::MonoBehaviour
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel* _Content; // 0x18
		::RPG::Client::AnimatorButton* _BtnConfirm; // 0x20
		::RPG::Client::AnimatorButton* _BtnCancel; // 0x28
		::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmResultControl* _OldResult; // 0x30
		::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmResultControl* _NewResult; // 0x38
		::UnityEngine::Animation* _Animation; // 0x40
		::RPG::Client::RPGFadeAnimation* _FadeAnimation; // 0x48

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL__CTOR_OFFSET))(this);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel* get_Content()
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL_GET_CONTENT_OFFSET))(this);
		}

		::System::Void set_Content(::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL_SET_CONTENT_OFFSET))(this, a1);
		}

		::System::Void _Refresh(::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel* a1)
		{
			return ((::System::Void(*)(::PVOID, ::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL__REFRESH_OFFSET))(this, a1);
		}

		::System::Void PlayAnimation()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL_PLAYANIMATION_OFFSET))(this);
		}
	};
}
