#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_440;
class Class_0_16E4307DCC419505_452;

#define CLASS_1_7D46F1066EF90FA6_1_METHOD_1_3422201382CE593B_OFFSET UNITYSDK_OFFSET(0x1635AC90)
#define CLASS_1_7D46F1066EF90FA6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x1635AC00)

inline static constexpr unsigned int Class_1_7D46F1066EF90FA6_1_TypeDefinitionIndex = 62646;

class Class_1_7D46F1066EF90FA6_1 : public ::System::Object
{
public:
	::Class_0_16E4307DCC419505_452* BBHLBMONOIJ; // 0x10
	::Class_0_16E4307DCC419505_440* JILBKMEGBDK; // 0x18

	::System::Void _ctor(::Class_0_16E4307DCC419505_440* a1, ::Class_0_16E4307DCC419505_452* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_440*, ::Class_0_16E4307DCC419505_452*))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_1__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Single Method_1_3422201382CE593B()
	{
		return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_7D46F1066EF90FA6_1_METHOD_1_3422201382CE593B_OFFSET))(this);
	}
};
