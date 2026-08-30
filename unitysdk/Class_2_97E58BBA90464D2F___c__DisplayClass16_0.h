#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AbilityCurrentShieldChange; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_97E58BBA90464D2F___C__DISPLAYCLASS16_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1579F600)
#define CLASS_2_97E58BBA90464D2F___C__DISPLAYCLASS16_0___ONBATTLEABILITYCURRENTSHIELDCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x1579FCC0)

inline static constexpr unsigned int Class_2_97E58BBA90464D2F___c__DisplayClass16_0_TypeDefinitionIndex = 71984;

class Class_2_97E58BBA90464D2F___c__DisplayClass16_0 : public ::System::Object
{
public:
	::RPG::GameCore::AbilityCurrentShieldChange* evt; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___C__DISPLAYCLASS16_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnBattleAbilityCurrentShieldChange_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___C__DISPLAYCLASS16_0___ONBATTLEABILITYCURRENTSHIELDCHANGE_B__0_OFFSET))(this, a1);
	}
};
