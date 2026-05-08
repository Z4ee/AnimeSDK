#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define CLASS_1_54B53C04E1CF3EFD_STRUCT_2_0B298D99FFBCEF56_METHOD_2_35EA095E1AFDD9C8_OFFSET UNITYSDK_OFFSET(0x6F2200)
#define CLASS_1_54B53C04E1CF3EFD_STRUCT_2_0B298D99FFBCEF56_TOSTRING_OFFSET UNITYSDK_OFFSET(0x6F21F0)

inline static constexpr unsigned int Class_1_54B53C04E1CF3EFD_Struct_2_0B298D99FFBCEF56_TypeDefinitionIndex = 72257;

struct alignas(2) Class_1_54B53C04E1CF3EFD_Struct_2_0B298D99FFBCEF56
{
	::System::UInt16 Field_2_0; // 0x10
	::System::UInt16 Field_2_1; // 0x12
	::System::Boolean Field_2_2; // 0x14

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54B53C04E1CF3EFD_STRUCT_2_0B298D99FFBCEF56_TOSTRING_OFFSET))(this);
	}

	::System::String* Method_2_35EA095E1AFDD9C8()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_1_54B53C04E1CF3EFD_STRUCT_2_0B298D99FFBCEF56_METHOD_2_35EA095E1AFDD9C8_OFFSET))(this);
	}
};
