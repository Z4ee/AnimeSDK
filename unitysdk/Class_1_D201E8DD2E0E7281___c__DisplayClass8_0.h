#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D201E8DD2E0E7281;
namespace RPG::GameCore { class GameEntity; }

#define CLASS_1_D201E8DD2E0E7281___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E58880)
#define CLASS_1_D201E8DD2E0E7281___C__DISPLAYCLASS8_0___SETBOX_B__0_OFFSET UNITYSDK_OFFSET(0x15E58BF0)

inline static constexpr unsigned int Class_1_D201E8DD2E0E7281___c__DisplayClass8_0_TypeDefinitionIndex = 57507;

class Class_1_D201E8DD2E0E7281___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_1_D201E8DD2E0E7281* __4__this; // 0x10
	::RPG::GameCore::GameEntity* boxEntity; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D201E8DD2E0E7281___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetBox_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_D201E8DD2E0E7281___C__DISPLAYCLASS8_0___SETBOX_B__0_OFFSET))(this);
	}
};
