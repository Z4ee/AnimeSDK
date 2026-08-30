#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1397;
class Class_1_115E551636659526_Class_1_A70BE128E099E3BE;
class Class_1_5EBDCA5E10FB9D5A;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSettleConfirmViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0xCA066F0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0xCA066E0)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSettleConfirmViewModel_Factory_TypeDefinitionIndex = 80291;

	class ChallengeTierceSettleConfirmViewModel_Factory : public ::System::Object
	{
	public:
		::Class_1_115E551636659526_Class_1_A70BE128E099E3BE* _ResultFactory; // 0x10
		::Class_0_16E4307DCC419505_1397* _WindowService; // 0x18

		::System::Void _ctor(::Class_0_16E4307DCC419505_1397* a1, ::Class_1_115E551636659526_Class_1_A70BE128E099E3BE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1397*, ::Class_1_115E551636659526_Class_1_A70BE128E099E3BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel* Create(::Class_1_5EBDCA5E10FB9D5A* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel*(*)(::PVOID, ::Class_1_5EBDCA5E10FB9D5A*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
