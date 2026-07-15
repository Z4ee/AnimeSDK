#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_4102F28AD1F76250;

#define CLASS_2_4102F28AD1F76250___C__DISPLAYCLASS10_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18B26E00)
#define CLASS_2_4102F28AD1F76250___C__DISPLAYCLASS10_0__SETVIEWACTIVE_B__0_OFFSET UNITYSDK_OFFSET(0x18B27FB0)

inline static constexpr unsigned int Class_2_4102F28AD1F76250___c__DisplayClass10_0_TypeDefinitionIndex = 68876;

class Class_2_4102F28AD1F76250___c__DisplayClass10_0 : public ::System::Object
{
public:
	::Class_2_4102F28AD1F76250* __4__this; // 0x10
	::System::Boolean needNotify; // 0x18
	::System::Boolean active; // 0x19

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4102F28AD1F76250___C__DISPLAYCLASS10_0__CTOR_OFFSET))(this);
	}

	::System::Void _SetViewActive_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4102F28AD1F76250___C__DISPLAYCLASS10_0__SETVIEWACTIVE_B__0_OFFSET))(this);
	}
};
