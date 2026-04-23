#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_1_AAE3CF8472BB8C9A;

#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS30_0__CTOR_OFFSET UNITYSDK_OFFSET(0x129C3070)
#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS30_0___SENDITEMSUCCEED_B__0_OFFSET UNITYSDK_OFFSET(0x129C7250)

inline static constexpr unsigned int Class_2_54CCD44980580DB7___c__DisplayClass30_0_TypeDefinitionIndex = 54984;

class Class_2_54CCD44980580DB7___c__DisplayClass30_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_557* progress; // 0x10
	::Class_1_AAE3CF8472BB8C9A* item; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS30_0__CTOR_OFFSET))(this);
	}

	::System::Void __SendItemSucceed_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS30_0___SENDITEMSUCCEED_B__0_OFFSET))(this);
	}
};
