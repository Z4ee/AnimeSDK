#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_B950BF4BD29209BC_METHOD_2_02FC89337888B618_OFFSET UNITYSDK_OFFSET(0x38622D0)
#define STRUCT_2_B950BF4BD29209BC_METHOD_2_E923266A4538CFD9_OFFSET UNITYSDK_OFFSET(0x3862270)

inline static constexpr unsigned int Struct_2_B950BF4BD29209BC_TypeDefinitionIndex = 6597;

struct alignas(4) Struct_2_B950BF4BD29209BC
{
	::System::Single Field_2_0; // 0x10
	::System::Single Field_2_1; // 0x14
	::System::Single Field_2_2; // 0x18
	::System::Single Field_2_3; // 0x1C
	::System::Single Field_2_4; // 0x20
	::System::Single Field_2_5; // 0x24

	::System::Single Method_2_E923266A4538CFD9(::System::Int32 a1)
	{
		return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_B950BF4BD29209BC_METHOD_2_E923266A4538CFD9_OFFSET))(this, a1);
	}

	::System::Void Method_2_02FC89337888B618(::System::Int32 a1, ::System::Single a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + STRUCT_2_B950BF4BD29209BC_METHOD_2_02FC89337888B618_OFFSET))(this, a1, a2);
	}
};
