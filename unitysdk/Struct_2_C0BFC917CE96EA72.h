#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_C0BFC917CE96EA72_DISPOSE_OFFSET UNITYSDK_OFFSET(0x4B5FE0)
#define STRUCT_2_C0BFC917CE96EA72_METHOD_2_ACEF84ADA5B430E3_OFFSET UNITYSDK_OFFSET(0xB4F7700)
#define STRUCT_2_C0BFC917CE96EA72__CTOR_OFFSET UNITYSDK_OFFSET(0x2661E0)

inline static constexpr unsigned int Struct_2_C0BFC917CE96EA72_TypeDefinitionIndex = 41410;

struct alignas(1) Struct_2_C0BFC917CE96EA72
{
	::System::Void _ctor(::System::String* a1, ::System::Boolean a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_C0BFC917CE96EA72__CTOR_OFFSET))(this, a1, a2);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_C0BFC917CE96EA72_DISPOSE_OFFSET))(this);
	}

	static ::Struct_2_C0BFC917CE96EA72 Method_2_ACEF84ADA5B430E3(::System::String* a1, ::System::Boolean a2)
	{
		return ((::Struct_2_C0BFC917CE96EA72(*)(::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_C0BFC917CE96EA72_METHOD_2_ACEF84ADA5B430E3_OFFSET))(a1, a2);
	}
};
