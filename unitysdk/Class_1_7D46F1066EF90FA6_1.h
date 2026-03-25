#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_357;
class Class_0_16E4307DCC419505_368;

#define CLASS_1_7D46F1066EF90FA6_1_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x8BE31D0)
#define CLASS_1_7D46F1066EF90FA6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x8BE3140)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_1_TypeDefinitionIndex = 50850;

class Class_1_7D46F1066EF90FA6_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_368* Field_1_1; // 0x10
	::Class_0_16E4307DCC419505_357* Field_1_0; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_357* a1, ::Class_0_16E4307DCC419505_368* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_357*, ::Class_0_16E4307DCC419505_368*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_1_METHOD_1_3422201382CE593B_OFFSET))(this);
	}
};
