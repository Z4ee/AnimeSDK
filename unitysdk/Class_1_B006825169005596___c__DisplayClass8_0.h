#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B006825169005596;
class Class_1_B006825169005596_Class_1_CEC90F0D0181FB2C;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_B006825169005596___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC288B00)
#define CLASS_1_B006825169005596___C__DISPLAYCLASS8_0___TRYSPAWNGUESTPET_B__0_OFFSET UNITYSDK_OFFSET(0xC28E680)

inline static constexpr unsigned int Class_1_B006825169005596___c__DisplayClass8_0_TypeDefinitionIndex = 75640;

class Class_1_B006825169005596___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_1_B006825169005596* __4__this; // 0x10
	::Class_1_B006825169005596_Class_1_CEC90F0D0181FB2C* handle; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_B006825169005596___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void __TrySpawnGuestPet_b__0(::RPG::GameCore::GameEntity* a1)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*))((::PBYTE)hIl2Cpp + CLASS_1_B006825169005596___C__DISPLAYCLASS8_0___TRYSPAWNGUESTPET_B__0_OFFSET))(this, a1);
	}
};
