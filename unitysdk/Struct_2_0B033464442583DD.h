#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_D58007B05253E4CC.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_0B033464442583DD__CTOR_OFFSET UNITYSDK_OFFSET(0x3A4A20)

inline static constexpr unsigned int Struct_2_0B033464442583DD_TypeDefinitionIndex = 62093;

struct alignas(8) Struct_2_0B033464442583DD
{
	::Enum_3_D58007B05253E4CC Field_2_0; // 0x10
	::System::String* Field_2_1; // 0x18

	::System::Void _ctor(::Enum_3_D58007B05253E4CC a1, ::System::String* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_D58007B05253E4CC, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_0B033464442583DD__CTOR_OFFSET))(this, a1, a2);
	}
};
