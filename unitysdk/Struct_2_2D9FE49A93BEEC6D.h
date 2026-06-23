#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2D9FE49A93BEEC6D__CTOR_OFFSET UNITYSDK_OFFSET(0x32D820)

inline static constexpr unsigned int Struct_2_2D9FE49A93BEEC6D_TypeDefinitionIndex = 62602;

struct alignas(4) Struct_2_2D9FE49A93BEEC6D
{
	::System::Boolean Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_2D9FE49A93BEEC6D__CTOR_OFFSET))(this, a1, a2);
	}
};
