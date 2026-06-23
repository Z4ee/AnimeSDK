#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_C8629618711DF8B3_METHOD_2_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x246290)
#define STRUCT_2_C8629618711DF8B3__CTOR_OFFSET UNITYSDK_OFFSET(0x2B6D10)

inline static constexpr unsigned int Struct_2_C8629618711DF8B3_TypeDefinitionIndex = 34551;

struct alignas(8) Struct_2_C8629618711DF8B3
{
	::System::String* Field_2_0; // 0x10

	::System::Void _ctor(::System::String* a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + STRUCT_2_C8629618711DF8B3__CTOR_OFFSET))(this, a1);
	}

	::System::String* Method_2_126AB3935214AA22()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C8629618711DF8B3_METHOD_2_126AB3935214AA22_OFFSET))(this);
	}
};
