#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Action; }
namespace System::Diagnostics { class Stopwatch; }

#define CLASS_3_A7957C59AD913633___C__DISPLAYCLASS0_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15E869A0)
#define CLASS_3_A7957C59AD913633___C__DISPLAYCLASS0_0__ONINIT_B__0_OFFSET UNITYSDK_OFFSET(0x15E869C0)
#define CLASS_3_A7957C59AD913633___C__DISPLAYCLASS0_0__ONINIT_B__1_OFFSET UNITYSDK_OFFSET(0x15E86A50)

inline static constexpr unsigned int Class_3_A7957C59AD913633___c__DisplayClass0_0_TypeDefinitionIndex = 58375;

class Class_3_A7957C59AD913633___c__DisplayClass0_0 : public ::System::Object
{
public:
	::System::Diagnostics::Stopwatch* stopwatch; // 0x10
	::System::Action* __9__1; // 0x18

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
