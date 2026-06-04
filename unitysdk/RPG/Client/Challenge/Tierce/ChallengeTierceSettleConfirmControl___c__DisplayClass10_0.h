#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSettleConfirmViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D5910)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL___C__DISPLAYCLASS10_0___REFRESH_B__0_OFFSET UNITYSDK_OFFSET(0xB4D5B90)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL___C__DISPLAYCLASS10_0___REFRESH_B__1_OFFSET UNITYSDK_OFFSET(0xB4D5D50)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSettleConfirmControl___c__DisplayClass10_0_TypeDefinitionIndex = 74200;

	class ChallengeTierceSettleConfirmControl___c__DisplayClass10_0 : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel* vm; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
		}

		::System::Void __Refresh_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL___C__DISPLAYCLASS10_0___REFRESH_B__0_OFFSET))(this);
		}

		::System::Void __Refresh_b__1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMCONTROL___C__DISPLAYCLASS10_0___REFRESH_B__1_OFFSET))(this);
		}
	};
}
