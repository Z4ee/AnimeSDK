#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_97E58BBA90464D2F___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x19154930)
#define CLASS_2_97E58BBA90464D2F___C__DISPLAYCLASS15_0___ONBATTLEABILITYCURRENTHPCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x19155110)

inline static constexpr unsigned int Class_2_97E58BBA90464D2F___c__DisplayClass15_0_TypeDefinitionIndex = 71982;

class Class_2_97E58BBA90464D2F___c__DisplayClass15_0 : public ::System::Object
{
public:
	::RPG::GameCore::AbilityCurrentHPChange* evt; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___C__DISPLAYCLASS15_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __OnBattleAbilityCurrentHPChange_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_2_97E58BBA90464D2F___C__DISPLAYCLASS15_0___ONBATTLEABILITYCURRENTHPCHANGE_B__0_OFFSET))(this, a1);
	}
};
