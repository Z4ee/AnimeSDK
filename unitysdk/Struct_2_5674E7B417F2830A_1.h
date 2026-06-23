#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_5674E7B417F2830A_1__CTOR_OFFSET UNITYSDK_OFFSET(0x2AB920)

inline static constexpr unsigned int Struct_2_5674E7B417F2830A_1_TypeDefinitionIndex = 40659;

struct alignas(4) Struct_2_5674E7B417F2830A_1
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A_1__CTOR_OFFSET))(this, a1, a2);
	}
};
