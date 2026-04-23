#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_276321B6B122C69C_2_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15A2970)
#define STRUCT_2_276321B6B122C69C_2__CTOR_OFFSET UNITYSDK_OFFSET(0x73E20)
#define STRUCT_2_276321B6B122C69C_2___IFIXBASEPROXY_TOSTRING_OFFSET UNITYSDK_OFFSET(0x15A2980)

inline static constexpr unsigned int Struct_2_276321B6B122C69C_2_TypeDefinitionIndex = 62136;

struct alignas(4) Struct_2_276321B6B122C69C_2
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_2__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_2_TOSTRING_OFFSET))(this);
	}

	::System::String* __iFixBaseProxy_ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_2___IFIXBASEPROXY_TOSTRING_OFFSET))(this);
	}
};
