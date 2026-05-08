#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_1685EC66FBD28897.h"
#include "unitysdk/Class_2_12BDE7300F0E061C_Enum_3_31AEB9C2FD02C06E.h"

class Class_2_1824EF69C8E376A3;
class Class_2_3B1E761D184CCDAF;

#define CLASS_2_12BDE7300F0E061C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x106ABEF0)
#define CLASS_2_12BDE7300F0E061C__CTOR_OFFSET UNITYSDK_OFFSET(0x106ABEB0)

inline static constexpr unsigned int Class_2_12BDE7300F0E061C_TypeDefinitionIndex = 79700;

class Class_2_12BDE7300F0E061C : public ::Class_1_1685EC66FBD28897
{
public:
	::Class_2_1824EF69C8E376A3* Field_2_0; // 0xD8
	::System::Boolean Field_2_1; // 0xE0
	::Class_2_12BDE7300F0E061C_Enum_3_31AEB9C2FD02C06E Field_2_2; // 0xE4

	::System::Void _ctor(::Class_2_3B1E761D184CCDAF* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_3B1E761D184CCDAF*))((::PBYTE)hIl2Cpp + CLASS_2_12BDE7300F0E061C__CTOR_OFFSET))(this, a1);
	}

	::System::Void _ctor_1()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_12BDE7300F0E061C__CTOR_1_OFFSET))(this);
	}
};
