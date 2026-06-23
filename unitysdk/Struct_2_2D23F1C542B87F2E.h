#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2D23F1C542B87F2E_EQUALS_OFFSET UNITYSDK_OFFSET(0x7B1200)
#define STRUCT_2_2D23F1C542B87F2E__CTOR_OFFSET UNITYSDK_OFFSET(0x2B66C0)

inline static constexpr unsigned int Struct_2_2D23F1C542B87F2E_TypeDefinitionIndex = 79279;

struct alignas(4) Struct_2_2D23F1C542B87F2E
{
	::System::Int32 Field_2_0; // 0x10

	::System::Void _ctor(::System::Int32 a1)
	{
		return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + STRUCT_2_2D23F1C542B87F2E__CTOR_OFFSET))(this, a1);
	}

	::System::Boolean Equals(::Struct_2_2D23F1C542B87F2E a1)
	{
		return ((::System::Boolean(*)(::PVOID, ::Struct_2_2D23F1C542B87F2E))((::PBYTE)hIl2Cpp + STRUCT_2_2D23F1C542B87F2E_EQUALS_OFFSET))(this, a1);
	}
};
