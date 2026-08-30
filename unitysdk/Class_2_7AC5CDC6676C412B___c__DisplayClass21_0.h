#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_1095;

#define CLASS_2_7AC5CDC6676C412B___C__DISPLAYCLASS21_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1640EB90)
#define CLASS_2_7AC5CDC6676C412B___C__DISPLAYCLASS21_0___SETUPBUTTONENABLE_B__0_OFFSET UNITYSDK_OFFSET(0x1640FE90)

inline static constexpr unsigned int Class_2_7AC5CDC6676C412B___c__DisplayClass21_0_TypeDefinitionIndex = 71578;

class Class_2_7AC5CDC6676C412B___c__DisplayClass21_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_1095* panel; // 0x10
	::System::Boolean isEnable; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B___C__DISPLAYCLASS21_0__CTOR_OFFSET))(this);
	}

	::System::Void __SetupButtonEnable_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AC5CDC6676C412B___C__DISPLAYCLASS21_0___SETUPBUTTONENABLE_B__0_OFFSET))(this);
	}
};
