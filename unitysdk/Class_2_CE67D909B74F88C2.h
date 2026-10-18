#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F9FBCC956DFCF137_1.h"

class Class_1_7325E2A200EF063B;
class Class_3_1DDBD26A53751A71_1;

#define CLASS_2_CE67D909B74F88C2_METHOD_2_432DB9D15513A89E_OFFSET UNITYSDK_OFFSET(0x1CB79AA0)
#define CLASS_2_CE67D909B74F88C2__CTOR_OFFSET UNITYSDK_OFFSET(0x1CB79A90)

inline static constexpr unsigned int Class_2_CE67D909B74F88C2_TypeDefinitionIndex = 43094;

class Class_2_CE67D909B74F88C2 : public ::Class_1_F9FBCC956DFCF137_1
{
public:
	::Class_3_1DDBD26A53751A71_1* IGHAHBNLIJA; // 0x18

	::System::Void _ctor(::Class_3_1DDBD26A53751A71_1* a1, ::Class_1_7325E2A200EF063B* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_3_1DDBD26A53751A71_1*, ::Class_1_7325E2A200EF063B*))((::PBYTE)hIl2Cpp + CLASS_2_CE67D909B74F88C2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_432DB9D15513A89E()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CE67D909B74F88C2_METHOD_2_432DB9D15513A89E_OFFSET))(this);
	}
};
