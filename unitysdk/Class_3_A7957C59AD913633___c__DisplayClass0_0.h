#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Diagnostics { class Stopwatch; }

#define CLASS_3_A7957C59AD913633___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0xECAA100)
#define CLASS_3_A7957C59AD913633___C__DISPLAYCLASS0_0__ONINIT_B__0_OFFSET UNITYSDK_OFFSET(0xECAA180)
#define CLASS_3_A7957C59AD913633___C__DISPLAYCLASS0_0__ONINIT_B__1_OFFSET UNITYSDK_OFFSET(0xECAA200)

inline static constexpr unsigned int Class_3_A7957C59AD913633___c__DisplayClass0_0_TypeDefinitionIndex = 56355;

class Class_3_A7957C59AD913633___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Action* __9__1; // 0x10
	::System::Diagnostics::Stopwatch* stopwatch; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A7957C59AD913633___C__DISPLAYCLASS0_0__CTOR_OFFSET))(this);
	}

	::System::Void _OnInit_b__0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A7957C59AD913633___C__DISPLAYCLASS0_0__ONINIT_B__0_OFFSET))(this);
	}

	::System::Void _OnInit_b__1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_A7957C59AD913633___C__DISPLAYCLASS0_0__ONINIT_B__1_OFFSET))(this);
	}
};
