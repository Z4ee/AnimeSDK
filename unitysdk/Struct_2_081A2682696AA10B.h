#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E02FB5DE7C8D1AE7.h"
#include "unitysdk/System/ValueType.h"

class Class_3_CDD7C63403A61D90;
namespace System { class String; }

#define STRUCT_2_081A2682696AA10B_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x70A220)
#define STRUCT_2_081A2682696AA10B_TOSTRING_OFFSET UNITYSDK_OFFSET(0x70A210)

inline static constexpr unsigned int Struct_2_081A2682696AA10B_TypeDefinitionIndex = 65418;

struct alignas(8) Struct_2_081A2682696AA10B
{
	::Class_3_CDD7C63403A61D90* Field_2_0; // 0x10
	::Enum_3_E02FB5DE7C8D1AE7 Field_2_1; // 0x18

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_081A2682696AA10B_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_081A2682696AA10B_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
