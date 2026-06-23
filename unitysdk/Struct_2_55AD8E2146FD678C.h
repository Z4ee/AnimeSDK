#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_55AD8E2146FD678C__CTOR_1_OFFSET UNITYSDK_OFFSET(0x764FD0)
#define STRUCT_2_55AD8E2146FD678C__CTOR_OFFSET UNITYSDK_OFFSET(0x764FB0)

inline static constexpr unsigned int Struct_2_55AD8E2146FD678C_TypeDefinitionIndex = 84199;

struct alignas(8) Struct_2_55AD8E2146FD678C
{
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18
	::System::Int32 Field_2_2; // 0x1C
	::System::Int32 Field_2_3; // 0x20

	::System::Void _ctor(::System::String* a1, ::System::Int32 a2, ::System::Int32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_55AD8E2146FD678C__CTOR_OFFSET))(this, a1, a2, a3);
	}

	::System::Void _ctor_1(::System::String* a1, ::System::Int32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_55AD8E2146FD678C__CTOR_1_OFFSET))(this, a1, a2);
	}
};
