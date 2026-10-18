#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_CF86480F2E4E6546_Class_1_57A18A8F002D0354;
namespace System::Diagnostics { class Stopwatch; }

#define CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x15DF07E0)
#define CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354___C__DISPLAYCLASS7_0___WAITREADY_B__0_OFFSET UNITYSDK_OFFSET(0x15DF07F0)

inline static constexpr unsigned int Class_1_CF86480F2E4E6546_Class_1_57A18A8F002D0354___c__DisplayClass7_0_TypeDefinitionIndex = 80166;

class Class_1_CF86480F2E4E6546_Class_1_57A18A8F002D0354___c__DisplayClass7_0 : public ::System::Object
{
public:
	::System::Diagnostics::Stopwatch* stopwatch; // 0x10
	::Class_1_CF86480F2E4E6546_Class_1_57A18A8F002D0354* __4__this; // 0x18
	::System::Boolean hasReportedStall; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __WaitReady_b__0()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CF86480F2E4E6546_CLASS_1_57A18A8F002D0354___C__DISPLAYCLASS7_0___WAITREADY_B__0_OFFSET))(this);
	}
};
