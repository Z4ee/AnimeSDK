#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_137AB23E3A00ECA1__CTOR_OFFSET UNITYSDK_OFFSET(0x6ED5C0)

inline static constexpr unsigned int Struct_2_137AB23E3A00ECA1_TypeDefinitionIndex = 65854;

struct alignas(4) Struct_2_137AB23E3A00ECA1
{
	::System::UInt32 Field_2_0; // 0x10
	::System::UInt32 Field_2_1; // 0x14
	::System::UInt32 Field_2_2; // 0x18

	::System::Void _ctor(::System::UInt32 a1, ::System::UInt32 a2, ::System::UInt32 a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt32, ::System::UInt32, ::System::UInt32))((::PBYTE)hIl2Cpp + STRUCT_2_137AB23E3A00ECA1__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
