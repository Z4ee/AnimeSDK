#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_527;
class Class_0_16E4307DCC419505_541;

#define CLASS_1_7D46F1066EF90FA6_2_METHOD_1_10999434EEF11645_OFFSET UNITYSDK_OFFSET(0x1579FF00)
#define CLASS_1_7D46F1066EF90FA6_2__CTOR_OFFSET UNITYSDK_OFFSET(0x1579FE70)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_2_TypeDefinitionIndex = 62565;

class Class_1_7D46F1066EF90FA6_2 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_527* JILBKMEGBDK; // 0x10
	::Class_0_16E4307DCC419505_541* PMGONAJKJAE; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_527* a1, ::Class_0_16E4307DCC419505_541* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_527*, ::Class_0_16E4307DCC419505_541*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_10999434EEF11645()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_2_METHOD_1_10999434EEF11645_OFFSET))(this);
	}
};
