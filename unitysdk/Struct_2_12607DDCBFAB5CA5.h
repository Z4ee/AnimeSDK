#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_12607DDCBFAB5CA5__CTOR_OFFSET UNITYSDK_OFFSET(0x886970)

inline static constexpr unsigned int Struct_2_12607DDCBFAB5CA5_TypeDefinitionIndex = 72104;

struct alignas(2) Struct_2_12607DDCBFAB5CA5
{
	::System::UInt16 Field_2_1; // 0x10
	::System::Byte Field_2_0; // 0x12
	::System::UInt16 Field_2_7; // 0x14

	::System::Void _ctor(::System::UInt16 a1, ::System::UInt16 a2, ::System::Byte a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::UInt16, ::System::UInt16, ::System::Byte))((::PBYTE)hIl2Cpp + STRUCT_2_12607DDCBFAB5CA5__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
