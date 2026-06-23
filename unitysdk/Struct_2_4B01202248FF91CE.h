#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DADAC64B386D0C8E_1.h"
#include "unitysdk/System/ValueType.h"

class Class_1_2F58BE17F9302B94;

#define STRUCT_2_4B01202248FF91CE__CTOR_OFFSET UNITYSDK_OFFSET(0x3E5700)

inline static constexpr unsigned int Struct_2_4B01202248FF91CE_TypeDefinitionIndex = 67877;

struct alignas(8) Struct_2_4B01202248FF91CE
{
	::Enum_3_DADAC64B386D0C8E_1 Field_2_0; // 0x10
	::Class_1_2F58BE17F9302B94* Field_2_1; // 0x18

	::System::Void _ctor(::Enum_3_DADAC64B386D0C8E_1 a1, ::Class_1_2F58BE17F9302B94* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_DADAC64B386D0C8E_1, ::Class_1_2F58BE17F9302B94*))((::PBYTE)hIl2Cpp + STRUCT_2_4B01202248FF91CE__CTOR_OFFSET))(this, a1, a2);
	}
};
