#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_6F6D3F7A79E99D9C__CTOR_OFFSET UNITYSDK_OFFSET(0x3493D0)

inline static constexpr unsigned int Struct_2_6F6D3F7A79E99D9C_TypeDefinitionIndex = 80927;

struct alignas(8) Struct_2_6F6D3F7A79E99D9C
{
	// static const ::System::String* Field_2_2; // 0x0
	::System::String* Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x18

	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_6F6D3F7A79E99D9C__CTOR_OFFSET))(this, a1, a2);
	}
};
