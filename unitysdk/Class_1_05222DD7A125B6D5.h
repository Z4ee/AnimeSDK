#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/Challenge/Tierce/ChallengeTierceAttackDamageType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

#define CLASS_1_05222DD7A125B6D5_METHOD_1_4828C3B8C2EF9EB7_OFFSET UNITYSDK_OFFSET(0x134D7A40)
#define CLASS_1_05222DD7A125B6D5_METHOD_1_7ACB4AE52305EE70_OFFSET UNITYSDK_OFFSET(0x134D7AB0)

inline static constexpr unsigned int Class_1_05222DD7A125B6D5_TypeDefinitionIndex = 74093;

class Class_1_05222DD7A125B6D5 : public ::System::Object
{
public:
	static ::RPG::GameCore::AttackDamageType Method_1_4828C3B8C2EF9EB7(::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType a1)
	{
		return ((::RPG::GameCore::AttackDamageType(*)(::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_05222DD7A125B6D5_METHOD_1_4828C3B8C2EF9EB7_OFFSET))(a1);
	}

	static ::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType Method_1_7ACB4AE52305EE70(::RPG::GameCore::AttackDamageType a1)
	{
		return ((::RPG::Client::Challenge::Tierce::ChallengeTierceAttackDamageType(*)(::RPG::GameCore::AttackDamageType))((::PBYTE)hIl2Cpp + CLASS_1_05222DD7A125B6D5_METHOD_1_7ACB4AE52305EE70_OFFSET))(a1);
	}
};
