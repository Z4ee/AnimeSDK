#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6CC2897B74C41026_4_METHOD_2_77577333B4681208_OFFSET UNITYSDK_OFFSET(0x79CA60)
#define STRUCT_2_6CC2897B74C41026_4_METHOD_2_C114A1F8E08B6F92_OFFSET UNITYSDK_OFFSET(0x2B66C0)
#define STRUCT_2_6CC2897B74C41026_4_METHOD_2_C74CF020AA42ED85_OFFSET UNITYSDK_OFFSET(0x2B68B0)
#define STRUCT_2_6CC2897B74C41026_4__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

inline static constexpr unsigned int Struct_2_6CC2897B74C41026_4_TypeDefinitionIndex = 82960;

struct alignas(4) Struct_2_6CC2897B74C41026_4
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_4__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_77577333B4681208()
	{
		return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_4_METHOD_2_77577333B4681208_OFFSET))(this);
	}

	::System::Void Method_2_C114A1F8E08B6F92(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_4_METHOD_2_C114A1F8E08B6F92_OFFSET))(this, a1);
	}

	::System::Int32 Method_2_C74CF020AA42ED85()
	{
		return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_4_METHOD_2_C74CF020AA42ED85_OFFSET))(this);
	}
};
