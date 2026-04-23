#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_364;
class Class_0_16E4307DCC419505_377;

#define CLASS_1_7D46F1066EF90FA6_2_METHOD_1_861970C5F2C21AB2_OFFSET UNITYSDK_OFFSET(0x98DA430)
#define CLASS_1_7D46F1066EF90FA6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x98DA3A0)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_2_TypeDefinitionIndex = 57729;

class Class_1_7D46F1066EF90FA6_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_364* Field_1_0; // 0x10
	::Class_0_16E4307DCC419505_377* Field_1_1; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_364* a1, ::Class_0_16E4307DCC419505_377* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_364*, ::Class_0_16E4307DCC419505_377*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_861970C5F2C21AB2()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2_METHOD_1_861970C5F2C21AB2_OFFSET))(this);
	}
};
