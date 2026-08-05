#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_362723B84BC8BEE8_METHOD_2_5DE9667DA47C9DE0_OFFSET UNITYSDK_OFFSET(0x81D7B0)
#define STRUCT_2_362723B84BC8BEE8_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define STRUCT_2_362723B84BC8BEE8_METHOD_2_C74CF020AA42ED85_1_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_362723B84BC8BEE8_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x325570)

inline static constexpr unsigned int Struct_2_362723B84BC8BEE8_TypeDefinitionIndex = 41260;

struct alignas(4) Struct_2_362723B84BC8BEE8
{
	::System::Int32 Field_2_0; // 0x10

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_362723B84BC8BEE8_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Int32 Method_2_5DE9667DA47C9DE0(::System::Single a1, ::System::Single a2)
	{
		return ((::System::Int32(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_362723B84BC8BEE8_METHOD_2_5DE9667DA47C9DE0_OFFSET))(this, a1, a2);
	}

	::System::Int32 Method_2_C74CF020AA42ED85_1()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_362723B84BC8BEE8_METHOD_2_C74CF020AA42ED85_1_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_362723B84BC8BEE8_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
