#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_611;
class Class_0_16E4307DCC419505_788;

#define CLASS_1_CEC38EC3A51F2C03___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11B84720)
#define CLASS_1_CEC38EC3A51F2C03___C__DISPLAYCLASS8_0___TRYADDSELECTACTION_B__0_OFFSET UNITYSDK_OFFSET(0x11B84780)

inline static constexpr unsigned int Class_1_CEC38EC3A51F2C03___c__DisplayClass8_0_TypeDefinitionIndex = 61766;

class Class_1_CEC38EC3A51F2C03___c__DisplayClass8_0 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_611* actionItem; // 0x10

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_CEC38EC3A51F2C03___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __TryAddSelectAction_b__0(::Class_0_16E4307DCC419505_788* x)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_0_16E4307DCC419505_788*))((::PBYTE)hIl2Cpp + CLASS_1_CEC38EC3A51F2C03___C__DISPLAYCLASS8_0___TRYADDSELECTACTION_B__0_OFFSET))(this, x);
	}
};
