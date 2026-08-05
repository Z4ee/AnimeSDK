#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_C8629618711DF8B3_1_DISPOSE_OFFSET UNITYSDK_OFFSET(0x884630)
#define STRUCT_2_C8629618711DF8B3_1__CTOR_OFFSET UNITYSDK_OFFSET(0x324D50)

inline static constexpr unsigned int Struct_2_C8629618711DF8B3_1_TypeDefinitionIndex = 41637;

struct alignas(8) Struct_2_C8629618711DF8B3_1
{
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_C8629618711DF8B3_1__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C8629618711DF8B3_1_DISPOSE_OFFSET))(this);
	}
};
