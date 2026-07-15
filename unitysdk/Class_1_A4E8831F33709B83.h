#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceAttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_A4E8831F33709B83_METHOD_1_47DD4208D72D43AE_OFFSET UNITYSDK_OFFSET(0x1674FDF0)
#define CLASS_1_A4E8831F33709B83_METHOD_1_4828C3B8C2EF9EB7_OFFSET UNITYSDK_OFFSET(0x1674FE60)

inline static constexpr unsigned int Class_1_A4E8831F33709B83_TypeDefinitionIndex = 76477;

class Class_1_A4E8831F33709B83 : public ::System::Object
{
public:
	static ::RPG::GameCore::AttackDamageType Method_1_47DD4208D72D43AE(::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType a1)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_A4E8831F33709B83_METHOD_1_47DD4208D72D43AE_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType Method_1_4828C3B8C2EF9EB7(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_A4E8831F33709B83_METHOD_1_4828C3B8C2EF9EB7_OFFSET))(a1);
	}
};
