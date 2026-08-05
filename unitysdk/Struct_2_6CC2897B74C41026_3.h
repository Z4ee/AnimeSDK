#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_6CC2897B74C41026_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7DB750)
#define STRUCT_2_6CC2897B74C41026_3__CTOR_OFFSET UNITYSDK_OFFSET(0x3253A0)

inline static constexpr unsigned int Struct_2_6CC2897B74C41026_3_TypeDefinitionIndex = 45412;

struct alignas(4) Struct_2_6CC2897B74C41026_3
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_6CC2897B74C41026_3_DISPOSE_OFFSET))(this);
	}
};
