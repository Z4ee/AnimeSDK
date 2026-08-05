#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_6A18423882452F32__CTOR_OFFSET UNITYSDK_OFFSET(0x7DB980)

inline static constexpr unsigned int Struct_2_6A18423882452F32_TypeDefinitionIndex = 63189;

struct alignas(8) Struct_2_6A18423882452F32
{
	::System::Int32 Field_2_2; // 0x10
	::System::String* Field_2_1; // 0x18
	::System::Boolean Field_2_0; // 0x20

	::System::Void _ctor(::System::Int32 a1, ::System::String* a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_6A18423882452F32__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
