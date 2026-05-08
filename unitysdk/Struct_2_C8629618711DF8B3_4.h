#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_C8629618711DF8B3_4_DISPOSE_OFFSET UNITYSDK_OFFSET(0x71E770)
#define STRUCT_2_C8629618711DF8B3_4__CTOR_OFFSET UNITYSDK_OFFSET(0x2E5940)

inline static constexpr unsigned int Struct_2_C8629618711DF8B3_4_TypeDefinitionIndex = 57186;

struct alignas(8) Struct_2_C8629618711DF8B3_4
{
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_C8629618711DF8B3_4__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C8629618711DF8B3_4_DISPOSE_OFFSET))(this);
	}
};
