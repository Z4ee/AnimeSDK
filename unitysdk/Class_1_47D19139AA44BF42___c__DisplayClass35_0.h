#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_415;
namespace RPG { template <typename T> class PoolList_1; }
namespace RPG::GameCore { class TurnBasedAbilityComponent; }
namespace RPG::GameCore { class TurnBasedModifierInstance; }

#define CLASS_1_47D19139AA44BF42___C__DISPLAYCLASS35_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1999C950)
#define CLASS_1_47D19139AA44BF42___C__DISPLAYCLASS35_0__REMOVEDEPENDENCYMODIFIERS_B__0_OFFSET UNITYSDK_OFFSET(0x1999D380)

inline static constexpr unsigned int Class_1_47D19139AA44BF42___c__DisplayClass35_0_TypeDefinitionIndex = 54661;

class Class_1_47D19139AA44BF42___c__DisplayClass35_0 : public ::System::Object
{
public:
	::RPG::PoolList_1<::RPG::GameCore::TurnBasedModifierInstance*>* DependencyRemoveInstanceList; // 0x10
	::RPG::GameCore::TurnBasedAbilityComponent* pTurnBasedAbilityComp; // 0x18
	::RPG::GameCore::TurnBasedModifierInstance* removeInstance; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42___C__DISPLAYCLASS35_0__CTOR_OFFSET))(this);
	}

	::System::Void _RemoveDependencyModifiers_b__0(::Class_0_16E4307DCC419505_415* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_415*))((::PBYTE)hIl2Cpp + CLASS_1_47D19139AA44BF42___C__DISPLAYCLASS35_0__REMOVEDEPENDENCYMODIFIERS_B__0_OFFSET))(this, a1);
	}
};
