#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_96660E892790E9E7;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_96660E892790E9E7___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBAC69B0)
#define CLASS_1_96660E892790E9E7___C__DISPLAYCLASS8_0___SETBOX_B__0_OFFSET UNITYSDK_OFFSET(0xBAC6D20)

inline static constexpr unsigned int Class_1_96660E892790E9E7___c__DisplayClass8_0_TypeDefinitionIndex = 55517;

class Class_1_96660E892790E9E7___c__DisplayClass8_0 : public ::System::Object
{
public:
	::RPG::GameCore::GameEntity* boxEntity; // 0x10
	::Class_1_96660E892790E9E7* __4__this; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96660E892790E9E7___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetBox_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_96660E892790E9E7___C__DISPLAYCLASS8_0___SETBOX_B__0_OFFSET))(this);
	}
};
