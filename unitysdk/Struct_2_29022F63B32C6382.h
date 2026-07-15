#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_29022F63B32C6382__CTOR_OFFSET UNITYSDK_OFFSET(0x7A7DF0)

inline static constexpr unsigned int Struct_2_29022F63B32C6382_TypeDefinitionIndex = 74701;

struct alignas(4) Struct_2_29022F63B32C6382
{
	::System::Int32 Field_2_0; // 0x10
	::System::Int32 Field_2_1; // 0x14
	::System::Int32 Field_2_2; // 0x18
	::System::Int32 Field_2_3; // 0x1C

	::System::Void _ctor(::System::Int32 a1, ::System::Int32 a2, ::System::Int32 a3, ::System::Int32 a4)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_29022F63B32C6382__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
