#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_614;
class Class_1_E40337C55D87F197;

#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x162E6430)
#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS30_0___SENDITEMSUCCEED_B__0_OFFSET UNITYSDK_OFFSET(0x162EABC0)

inline static constexpr unsigned int Class_2_54CCD44980580DB7___c__DisplayClass30_0_TypeDefinitionIndex = 56955;

class Class_2_54CCD44980580DB7___c__DisplayClass30_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_614* progress; // 0x10
	::Class_1_E40337C55D87F197* item; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
	}

	::System::Void __SendItemSucceed_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS30_0___SENDITEMSUCCEED_B__0_OFFSET))(this);
	}
};
