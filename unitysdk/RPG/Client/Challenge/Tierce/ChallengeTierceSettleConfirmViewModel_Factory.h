#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1316;
class Class_1_115E551636659526_Class_1_A70BE128E099E3BE;
class Class_1_367B452FA4E5EC2C;
namespace RPG::Client::Challenge::Tierce { class ChallengeTierceSettleConfirmViewModel; }

#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY_CREATE_OFFSET UNITYSDK_OFFSET(0x187667A0)
#define RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY__CTOR_OFFSET UNITYSDK_OFFSET(0x18766790)

namespace RPG::Client::Challenge::Tierce
{
	inline static constexpr unsigned int ChallengeTierceSettleConfirmViewModel_Factory_TypeDefinitionIndex = 76654;

	class ChallengeTierceSettleConfirmViewModel_Factory : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_1316* _WindowService; // 0x10
		::Class_1_115E551636659526_Class_1_A70BE128E099E3BE* _ResultFactory; // 0x18

		::System::Void _ctor(::Class_0_16E4307DCC419505_1316* a1, ::Class_1_115E551636659526_Class_1_A70BE128E099E3BE* a2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_1316*, ::Class_1_115E551636659526_Class_1_A70BE128E099E3BE*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY__CTOR_OFFSET))(this, a1, a2);
		}

		::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel* Create(::Class_1_367B452FA4E5EC2C* a1)
		{
			return ((::RPG::Client::Challenge::Tierce::ChallengeTierceSettleConfirmViewModel*(*)(::PVOID, ::Class_1_367B452FA4E5EC2C*))((::PBYTE)hIl2Cpp + RPG_CLIENT_CHALLENGE_TIERCE_CHALLENGETIERCESETTLECONFIRMVIEWMODEL_FACTORY_CREATE_OFFSET))(this, a1);
		}
	};
}
