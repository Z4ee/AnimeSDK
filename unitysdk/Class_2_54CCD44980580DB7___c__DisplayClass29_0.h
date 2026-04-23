#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_557;
class Class_1_AAE3CF8472BB8C9A;

#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS29_0__CTOR_OFFSET UNITYSDK_OFFSET(0x129C3060)
#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS29_0___SENDITEMSTARTING_B__0_OFFSET UNITYSDK_OFFSET(0x129C7130)

inline static constexpr unsigned int Class_2_54CCD44980580DB7___c__DisplayClass29_0_TypeDefinitionIndex = 54983;

class Class_2_54CCD44980580DB7___c__DisplayClass29_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_557* progress; // 0x10
	::Class_1_AAE3CF8472BB8C9A* item; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS29_0__CTOR_OFFSET))(this);
	}

	::System::Void __SendItemStarting_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS29_0___SENDITEMSTARTING_B__0_OFFSET))(this);
	}
};
