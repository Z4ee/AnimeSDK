#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_440;
class Class_0_16E4307DCC419505_454;

#define CLASS_1_7D46F1066EF90FA6_2_METHOD_1_841E1F33C77D2AFF_OFFSET UNITYSDK_OFFSET(0x154E5A90)
#define CLASS_1_7D46F1066EF90FA6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x154E5A00)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_2_TypeDefinitionIndex = 62647;

class Class_1_7D46F1066EF90FA6_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_454* PMGONAJKJAE; // 0x10
	::Class_0_16E4307DCC419505_440* JILBKMEGBDK; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_440* a1, ::Class_0_16E4307DCC419505_454* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_440*, ::Class_0_16E4307DCC419505_454*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_841E1F33C77D2AFF()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2_METHOD_1_841E1F33C77D2AFF_OFFSET))(this);
	}
};
