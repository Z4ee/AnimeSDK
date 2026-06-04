#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_71E81E0EEBC490C0;
class Class_1_C16931E567A100F1;
class Class_2_AEE59ED8DADEC1A1;

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x18A2B310)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__0_OFFSET UNITYSDK_OFFSET(0x18A2CBF0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__1_OFFSET UNITYSDK_OFFSET(0x18A2CDC0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__2_OFFSET UNITYSDK_OFFSET(0x18A2CCE0)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass34_0_TypeDefinitionIndex = 34482;

class Class_1_C16931E567A100F1___c__DisplayClass34_0 : public ::System::Object
{
public:
	::Class_2_AEE59ED8DADEC1A1* teammate; // 0x10
	::Class_1_71E81E0EEBC490C0* aiData; // 0x18
	::Class_1_C16931E567A100F1* __4__this; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __ProcessSwapQueue_b__0(::Class_1_0E117AC86D8E5BCA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__0_OFFSET))(this, a1);
	}

	::System::Boolean __ProcessSwapQueue_b__2(::Class_1_0E117AC86D8E5BCA* a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__2_OFFSET))(this, a1);
	}

	::System::Int32 __ProcessSwapQueue_b__1(::Class_1_0E117AC86D8E5BCA* a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__1_OFFSET))(this, a1);
	}
};
