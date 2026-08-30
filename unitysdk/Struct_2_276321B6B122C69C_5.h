#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

#define STRUCT_2_276321B6B122C69C_5_TOSTRING_OFFSET UNITYSDK_OFFSET(0x3A9AD80)
#define STRUCT_2_276321B6B122C69C_5__CTOR_OFFSET UNITYSDK_OFFSET(0x6B4C20)

inline static constexpr unsigned int Struct_2_276321B6B122C69C_5_TypeDefinitionIndex = 67432;

struct alignas(4) Struct_2_276321B6B122C69C_5
{
	::System::UInt32 IBFCBHAMFIJ; // 0x10
	::System::UInt32 AAGKEBFHLMC; // 0x14

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_5__CTOR_OFFSET))(this, a1, a2);
	}

	::System::String* ToString()
	{
		return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_276321B6B122C69C_5_TOSTRING_OFFSET))(this);
	}
};
