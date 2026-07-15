#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class AbilityCurrentHPChange; }
namespace RPG::GameCore { class GameEntity; }

#define CLASS_2_97E58BBA90464D2F___C__DISPLAYCLASS15_0__CTOR_OFFSET UNITYSDK_OFFSET(0x183DDE00)
#define CLASS_2_97E58BBA90464D2F___C__DISPLAYCLASS15_0___ONBATTLEABILITYCURRENTHPCHANGE_B__0_OFFSET UNITYSDK_OFFSET(0x183DE5F0)

inline static constexpr unsigned int Class_2_97E58BBA90464D2F___c__DisplayClass15_0_TypeDefinitionIndex = 68784;

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
