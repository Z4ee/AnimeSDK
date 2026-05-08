#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_A48F3719AA1CF200.h"
#include "unitysdk/Enum_3_AAB6E3A70958B389.h"

#define CLASS_3_8EA10EB78A87F0A7__CTOR_OFFSET UNITYSDK_OFFSET(0x1B8B7ED0)

inline static constexpr unsigned int Class_3_8EA10EB78A87F0A7_TypeDefinitionIndex = 83209;

class Class_3_8EA10EB78A87F0A7 : public ::Class_2_A48F3719AA1CF200
{
public:
	::System::Boolean Field_3_2; // 0x10
	::System::Int32 Field_3_3; // 0x14
	::System::Int32 Field_3_1; // 0x18
	::Enum_3_AAB6E3A70958B389 Field_3_0; // 0x1C

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_8EA10EB78A87F0A7__CTOR_OFFSET))(this);
	}
};
