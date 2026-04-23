#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0E117AC86D8E5BCA;
class Class_1_586CC94A266070EA;
class Class_1_C16931E567A100F1;
class Class_2_1BB8CA1042AACD99;

#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0__CTOR_OFFSET UNITYSDK_OFFSET(0x17BEECC0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__0_OFFSET UNITYSDK_OFFSET(0x17BEFED0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__1_OFFSET UNITYSDK_OFFSET(0x17BEFFB0)
#define CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__2_OFFSET UNITYSDK_OFFSET(0x17BEFF40)

inline static constexpr unsigned int Class_1_C16931E567A100F1___c__DisplayClass34_0_TypeDefinitionIndex = 34200;

class Class_1_C16931E567A100F1___c__DisplayClass34_0 : public ::System::Object
{
public:
	::Class_1_586CC94A266070EA* aiData; // 0x10
	::Class_1_C16931E567A100F1* __4__this; // 0x18
	::Class_2_1BB8CA1042AACD99* teammate; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0__CTOR_OFFSET))(this);
	}

	::System::Boolean __ProcessSwapQueue_b__0(::Class_1_0E117AC86D8E5BCA* sel)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__0_OFFSET))(this, sel);
	}

	::System::Boolean __ProcessSwapQueue_b__2(::Class_1_0E117AC86D8E5BCA* sel)
	{
		return ((::System::Boolean(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__2_OFFSET))(this, sel);
	}

	::System::Int32 __ProcessSwapQueue_b__1(::Class_1_0E117AC86D8E5BCA* sel)
	{
		return ((::System::Int32(*)(::PVOID, ::Class_1_0E117AC86D8E5BCA*))((::PBYTE)hIl2Cpp + CLASS_1_C16931E567A100F1___C__DISPLAYCLASS34_0___PROCESSSWAPQUEUE_B__1_OFFSET))(this, sel);
	}
};
