#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6CC2897B74C41026_5_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x800C10)
#define STRUCT_2_6CC2897B74C41026_5_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x3253A0)
#define STRUCT_2_6CC2897B74C41026_5_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x325570)
#define STRUCT_2_6CC2897B74C41026_5__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_6CC2897B74C41026_5_TypeDefinitionIndex = 47934;

struct alignas(4) Struct_2_6CC2897B74C41026_5
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_5__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_5_METHOD_2_77577333B4681208_OFFSET))(this);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_5_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_5_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}
};
