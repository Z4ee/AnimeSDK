#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E240B71398B174A9;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_E240B71398B174A9___C__DISPLAYCLASS32_0__CTOR_OFFSET UNITYSDK_OFFSET(0xC363040)
#define CLASS_1_E240B71398B174A9___C__DISPLAYCLASS32_0___SHOW_B__0_OFFSET UNITYSDK_OFFSET(0xC363FB0)

inline static constexpr unsigned int Class_1_E240B71398B174A9___c__DisplayClass32_0_TypeDefinitionIndex = 80237;

class Class_1_E240B71398B174A9___c__DisplayClass32_0 : public ::System::Object
{
public:
	::Class_1_E240B71398B174A9* __4__this; // 0x10
	::System::Int32 generation; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9___C__DISPLAYCLASS32_0__CTOR_OFFSET))(this);
	}

	::System::Void __Show_b__0(::RPG::GameCore::GameEntity* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::RPG::GameCore::GameEntity*, ::System::Boolean))((::PBYTE)hIl2Cpp + CLASS_1_E240B71398B174A9___C__DISPLAYCLASS32_0___SHOW_B__0_OFFSET))(this, a1, a2);
	}
};
