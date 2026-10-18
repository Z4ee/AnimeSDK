#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1497;

#define CLASS_1_2C2F7FE79A4A69FE___C__DISPLAYCLASS1_0__CLOSECOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0xBB70B90)
#define CLASS_1_2C2F7FE79A4A69FE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB70B50)

inline static constexpr unsigned int Class_1_2C2F7FE79A4A69FE___c__DisplayClass1_0_TypeDefinitionIndex = 80513;

class Class_1_2C2F7FE79A4A69FE___c__DisplayClass1_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1497* windowService; // 0x10
	::System::Object* viewModel; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2F7FE79A4A69FE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _CloseCommand_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2F7FE79A4A69FE___C__DISPLAYCLASS1_0__CLOSECOMMAND_B__0_OFFSET))(this);
	}
};
