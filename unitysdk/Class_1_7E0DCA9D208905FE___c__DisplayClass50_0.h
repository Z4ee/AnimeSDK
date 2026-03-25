#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7E0DCA9D208905FE;
namespace RPG::GameCore { class AdventureCharacterController; }

#define CLASS_1_7E0DCA9D208905FE___C__DISPLAYCLASS50_0__CTOR_OFFSET UNITYSDK_OFFSET(0xEA51770)
#define CLASS_1_7E0DCA9D208905FE___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET UNITYSDK_OFFSET(0xEA51B30)

inline static constexpr unsigned int Class_1_7E0DCA9D208905FE___c__DisplayClass50_0_TypeDefinitionIndex = 61688;

class Class_1_7E0DCA9D208905FE___c__DisplayClass50_0 : public ::System::Object
{
public:
	::RPG::GameCore::AdventureCharacterController* characterCtrl; // 0x10
	::Class_1_7E0DCA9D208905FE* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE___C__DISPLAYCLASS50_0__CTOR_OFFSET))(this);
	}

	::System::Void __GetOrCreateEntity_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7E0DCA9D208905FE___C__DISPLAYCLASS50_0___GETORCREATEENTITY_B__0_OFFSET))(this);
	}
};
