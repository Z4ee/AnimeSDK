#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_356;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_47D19139AA44BF42___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x13AECA50)
#define CLASS_1_47D19139AA44BF42___C__DISPLAYCLASS35_0__REMOVEDEPENDENCYMODIFIERS_B__0_OFFSET UNITYSDK_OFFSET(0x13AED480)

inline static constexpr unsigned int Class_1_47D19139AA44BF42___c__DisplayClass35_0_TypeDefinitionIndex = 50892;

class Class_1_47D19139AA44BF42___c__DisplayClass35_0 : public ::System::Object
{
public:
	::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbilityComp; // 0x10
	::RPG::GameCore::TurnBasedModifierInstance* removeInstance; // 0x18
	::RPG::PoolList_1<::RPG::GameCore::TurnBasedModifierInstance*>* DependencyRemoveInstanceList; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
	}

	::System::Void _RemoveDependencyModifiers_b__0(::Class_0_16E4307DCC419505_356* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_356*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42___C__DISPLAYCLASS35_0__REMOVEDEPENDENCYMODIFIERS_B__0_OFFSET))(this, a1);
	}
};
