#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_31852543D3677906_1__CTOR_OFFSET UNITYSDK_OFFSET(0x80A800)

inline static constexpr unsigned int Struct_2_31852543D3677906_1_TypeDefinitionIndex = 83998;

struct alignas(1) Struct_2_31852543D3677906_1
{
	::System::Boolean Field_2_0; // 0x10
	::System::Boolean Field_2_1; // 0x11

	::System::Void _ctor(::System::Boolean a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + STRUCT_2_31852543D3677906_1__CTOR_OFFSET))(this, a1);
	}
};
