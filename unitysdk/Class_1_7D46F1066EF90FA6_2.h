#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_405;
class Class_0_16E4307DCC419505_419;

#define CLASS_1_7D46F1066EF90FA6_2_METHOD_1_841E1F33C77D2AFF_OFFSET UNITYSDK_OFFSET(0x16EF9A00)
#define CLASS_1_7D46F1066EF90FA6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x16EF9970)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_2_TypeDefinitionIndex = 59801;

class Class_1_7D46F1066EF90FA6_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_419* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_405* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_405* a1, ::Class_0_16E4307DCC419505_419* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_405*, ::Class_0_16E4307DCC419505_419*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_841E1F33C77D2AFF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2_METHOD_1_841E1F33C77D2AFF_OFFSET))(this);
	}
};
