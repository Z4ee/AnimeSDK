#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1342;

#define CLASS_1_2C2F7FE79A4A69FE___C__DISPLAYCLASS1_0__CLOSECOMMAND_B__0_OFFSET UNITYSDK_OFFSET(0x17078460)
#define CLASS_1_2C2F7FE79A4A69FE___C__DISPLAYCLASS1_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17078420)

inline static constexpr unsigned int Class_1_2C2F7FE79A4A69FE___c__DisplayClass1_0_TypeDefinitionIndex = 79189;

class Class_1_2C2F7FE79A4A69FE___c__DisplayClass1_0 : public ::System::Object
{
public:
	::System::Object* viewModel; // 0x10
	::Class_0_16E4307DCC419505_1342* windowService; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2F7FE79A4A69FE___C__DISPLAYCLASS1_0__CTOR_OFFSET))(this);
	}

	::System::Void _CloseCommand_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_2C2F7FE79A4A69FE___C__DISPLAYCLASS1_0__CLOSECOMMAND_B__0_OFFSET))(this);
	}
};
