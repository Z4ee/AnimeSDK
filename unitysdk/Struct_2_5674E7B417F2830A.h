#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_5674E7B417F2830A__CTOR_OFFSET UNITYSDK_OFFSET(0x312BA0)

inline static constexpr unsigned int Struct_2_5674E7B417F2830A_TypeDefinitionIndex = 51110;

struct alignas(4) Struct_2_5674E7B417F2830A
{
	::System::Int32 Field_2_1; // 0x10
	::System::Int32 Field_2_0; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_5674E7B417F2830A__CTOR_OFFSET))(this, a1, a2);
	}
};
