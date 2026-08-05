#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_F9CF80B27038E750.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_2B54C5CD6E9CE5A0__CTOR_OFFSET UNITYSDK_OFFSET(0x832910)

inline static constexpr unsigned int Struct_2_2B54C5CD6E9CE5A0_TypeDefinitionIndex = 89781;

struct alignas(8) Struct_2_2B54C5CD6E9CE5A0
{
	::Enum_3_F9CF80B27038E750 Field_2_3; // 0x10
	::System::Single Field_2_2; // 0x14
	::System::Int32 Field_2_1; // 0x18
	::System::UInt64 Field_2_0; // 0x20

	::System::Void _ctor(::Enum_3_F9CF80B27038E750 a1, ::System::Single a2, ::System::Int32 a3, ::System::UInt64 a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_F9CF80B27038E750, ::System::Single, ::System::Int32, ::System::UInt64))((::PBYTE)hIl2Cpp + STRUCT_2_2B54C5CD6E9CE5A0__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
