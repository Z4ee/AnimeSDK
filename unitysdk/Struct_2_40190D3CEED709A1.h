#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

class Class_3_C3F0E3B5AB5977AE_7;

#define STRUCT_2_40190D3CEED709A1_METHOD_2_D24017F82491A588_OFFSET UNITYSDK_OFFSET(0x7CC9C0)
#define STRUCT_2_40190D3CEED709A1_METHOD_2_E4C464F9D4D6FE6C_OFFSET UNITYSDK_OFFSET(0x7CC9B0)

inline static constexpr unsigned int Struct_2_40190D3CEED709A1_TypeDefinitionIndex = 60946;

struct alignas(4) Struct_2_40190D3CEED709A1
{
	// static const ::System::Int32 Field_2_0 = 0xFFFFFFFF; // 0x0
	::System::Int32 Field_2_7; // 0x10
	::System::Int32 Field_2_6; // 0x14
	::System::Int32 Field_2_5; // 0x18
	::System::Int32 Field_2_4; // 0x1C

	::Class_3_C3F0E3B5AB5977AE_7* Method_2_E4C464F9D4D6FE6C()
	{
		return ((::Class_3_C3F0E3B5AB5977AE_7*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_40190D3CEED709A1_METHOD_2_E4C464F9D4D6FE6C_OFFSET))(this);
	}

	::System::Boolean Method_2_D24017F82491A588()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_40190D3CEED709A1_METHOD_2_D24017F82491A588_OFFSET))(this);
	}
};
