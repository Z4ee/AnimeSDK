#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F963C9FA5FC80637;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditViewModel; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS27_0__CTOR_OFFSET UNITYSDK_OFFSET(0xCA21670)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS27_0__TRYSTARTCHALLENGE_B__0_OFFSET UNITYSDK_OFFSET(0xCA21A20)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamEditViewModel___c__DisplayClass27_0_TypeDefinitionIndex = 80305;

	class ChallengeTierceTeamEditViewModel___c__DisplayClass27_0 : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditViewModel* __4__this; // 0x10
		::Class_1_F963C9FA5FC80637* plan; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS27_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _TryStartChallenge_b__0(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS27_0__TRYSTARTCHALLENGE_B__0_OFFSET))(this, a1);
		}
	};
}
