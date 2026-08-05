#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_44A8FD5EE475BAE7.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_D2B3470CF1F8A0E3_DISPOSE_OFFSET UNITYSDK_OFFSET(0x8BF0F0)
#define STRUCT_2_D2B3470CF1F8A0E3__CTOR_OFFSET UNITYSDK_OFFSET(0x8BF0E0)

inline static constexpr unsigned int Struct_2_D2B3470CF1F8A0E3_TypeDefinitionIndex = 64768;

struct alignas(4) Struct_2_D2B3470CF1F8A0E3
{
	::Enum_3_44A8FD5EE475BAE7 Field_2_1; // 0x10
	::System::Boolean Field_2_0; // 0x14

	::System::Void _ctor(::Enum_3_44A8FD5EE475BAE7 a1)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_44A8FD5EE475BAE7))((::PBYTE)hIl2Cpp + STRUCT_2_D2B3470CF1F8A0E3__CTOR_OFFSET))(this, a1);
	}

	::System::Void Dispose()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_D2B3470CF1F8A0E3_DISPOSE_OFFSET))(this);
	}
};
