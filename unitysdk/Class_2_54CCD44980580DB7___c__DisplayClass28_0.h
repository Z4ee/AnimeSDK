#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_AAE3CF8472BB8C9A;
class Class_2_2690241A4D35989E;
class Class_2_54CCD44980580DB7;

#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS28_0__CTOR_OFFSET UNITYSDK_OFFSET(0x8D159A0)
#define CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS28_0___ONITEMFAILEDBYTHREAD_B__0_OFFSET UNITYSDK_OFFSET(0x8D19AE0)

inline static constexpr unsigned int Class_2_54CCD44980580DB7___c__DisplayClass28_0_TypeDefinitionIndex = 48237;

class Class_2_54CCD44980580DB7___c__DisplayClass28_0 : public ::System::Object
{
public:
	::Class_2_2690241A4D35989E* ex; // 0x10
	::Class_2_54CCD44980580DB7* __4__this; // 0x18
	::Class_1_AAE3CF8472BB8C9A* item; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS28_0__CTOR_OFFSET))(this);
	}

	::System::Void __OnItemFailedByThread_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_54CCD44980580DB7___C__DISPLAYCLASS28_0___ONITEMFAILEDBYTHREAD_B__0_OFFSET))(this);
	}
};
