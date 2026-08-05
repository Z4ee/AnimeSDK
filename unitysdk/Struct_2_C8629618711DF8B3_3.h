#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_C8629618711DF8B3_3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x7D0660)
#define STRUCT_2_C8629618711DF8B3_3__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

inline static constexpr unsigned int Struct_2_C8629618711DF8B3_3_TypeDefinitionIndex = 87586;

struct alignas(8) Struct_2_C8629618711DF8B3_3
{
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_C8629618711DF8B3_3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C8629618711DF8B3_3_DISPOSE_OFFSET))(this);
	}
};
