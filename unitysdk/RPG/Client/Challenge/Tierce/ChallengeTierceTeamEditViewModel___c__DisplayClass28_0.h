#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F963C9FA5FC80637;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceTeamEditViewModel; }
namespace RPG::Client::Promises { template <typename T> class IPromise_1; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1877F510)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS28_0__SUBMITCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x1877F910)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceTeamEditViewModel___c__DisplayClass28_0_TypeDefinitionIndex = 76668;

	class ChallengeTierceTeamEditViewModel___c__DisplayClass28_0 : public ::System::Object
	{
	public:
		::RPG::Client::Challenge::Tierce::ChallengeTierceTeamEditViewModel* __4__this; // 0x10
		::Class_1_F963C9FA5FC80637* plan; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
		}

		::RPG::Client::Promises::IPromise_1<::System::Boolean>* _SubmitChange_b__0(::System::Boolean a1)
		{
			return ((::RPG::Client::Promises::IPromise_1<::System::Boolean>*(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCETEAMEDITVIEWMODEL___C__DISPLAYCLASS28_0__SUBMITCHANGE_B__0_OFFSET))(this, a1);
		}
	};
}
