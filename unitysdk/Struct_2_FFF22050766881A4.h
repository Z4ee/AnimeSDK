#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_FFF22050766881A4_METHOD_2_B85040FAD9EE240B_OFFSET UNITYSDK_OFFSET(0x3B88460)
#define STRUCT_2_FFF22050766881A4_METHOD_2_C817214DAEA3BC75_OFFSET UNITYSDK_OFFSET(0x3B884B0)

inline static constexpr unsigned int Struct_2_FFF22050766881A4_TypeDefinitionIndex = 10802;

struct alignas(8) Struct_2_FFF22050766881A4
{
	::System::UInt64 CHFFMMMGDDH; // 0x10
	::System::UInt64 MEBJJBJFMLI; // 0x18
	::System::UInt64 NHFCCMPFMNM; // 0x20
	::System::UInt64 AIJOAHLNILB; // 0x28

	::System::Void Method_2_B85040FAD9EE240B(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_FFF22050766881A4_METHOD_2_B85040FAD9EE240B_OFFSET))(this, a1);
	}

	::System::Boolean Method_2_C817214DAEA3BC75(::System::Int32 a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_FFF22050766881A4_METHOD_2_C817214DAEA3BC75_OFFSET))(this, a1);
	}
};
