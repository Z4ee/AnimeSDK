#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_31852543D3677906__CTOR_OFFSET UNITYSDK_OFFSET(0x8B66F0)

inline static constexpr unsigned int Struct_2_31852543D3677906_TypeDefinitionIndex = 64892;

struct alignas(1) Struct_2_31852543D3677906
{
	::System::Boolean Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x11

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906__CTOR_OFFSET))(this, a1);
	}
};
