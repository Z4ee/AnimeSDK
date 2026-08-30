#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_E40337C55D87F197;
class Class_2_54CCD44980580DB7;
class Class_2_BF47C01E9CFEA39C;

#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0xB6071A0)
#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS28_0___ONITEMFAILEDBYTHREAD_B__0_OFFSET UNITYSDK_OFFSET(0xB6071B0)

inline static constexpr unsigned int Class_2_54CCD44980580DB7___c__DisplayClass28_0_TypeDefinitionIndex = 59741;

class Class_2_54CCD44980580DB7___c__DisplayClass28_0 : public ::System::Object
{
public:
	::Class_2_54CCD44980580DB7* __4__this; // 0x10
	::Class_1_E40337C55D87F197* item; // 0x18
	::Class_2_BF47C01E9CFEA39C* ex; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnItemFailedByThread_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS28_0___ONITEMFAILEDBYTHREAD_B__0_OFFSET))(this);
	}
};
