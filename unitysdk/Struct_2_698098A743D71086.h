#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_698098A743D71086__CTOR_OFFSET UNITYSDK_OFFSET(0x3A36F10)

inline static constexpr unsigned int Struct_2_698098A743D71086_TypeDefinitionIndex = 57738;

struct alignas(4) Struct_2_698098A743D71086
{
	::System::Int32 GNNEFOIBAKH; // 0x10
	::System::Boolean GBDLCNEBHAP; // 0x14
	::System::Boolean FEPBDLMGNDP; // 0x15

	::System::Void _ctor(::System::Int32 a1, ::System::Boolean a2, ::System::Boolean a3)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_698098A743D71086__CTOR_OFFSET))(this, a1, a2, a3);
	}
};
