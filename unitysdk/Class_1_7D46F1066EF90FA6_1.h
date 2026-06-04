#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_381;
class Class_0_16E4307DCC419505_393;

#define CLASS_1_7D46F1066EF90FA6_1_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x143DB6D0)
#define CLASS_1_7D46F1066EF90FA6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x143DB640)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_1_TypeDefinitionIndex = 58529;

class Class_1_7D46F1066EF90FA6_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_393* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_381* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_381* a1, ::Class_0_16E4307DCC419505_393* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_381*, ::Class_0_16E4307DCC419505_393*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_1_METHOD_1_3422201382CE593B_OFFSET))(this);
	}
};
