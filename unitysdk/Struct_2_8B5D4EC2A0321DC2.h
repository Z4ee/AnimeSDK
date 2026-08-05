#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_2C704E2262533CBD.h"
#include "unitysdk/Enum_3_CE80FD07999C5845.h"
#include "unitysdk/Struct_2_8B5D4EC2A0321DC2_Enum_3_D349BF5DA6B8181F.h"
#include "unitysdk/Struct_2_8B5D4EC2A0321DC2_Enum_3_F3CF2327D2AF8F0A.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_8B5D4EC2A0321DC2__CTOR_OFFSET UNITYSDK_OFFSET(0x6245C0)

inline static constexpr unsigned int Struct_2_8B5D4EC2A0321DC2_TypeDefinitionIndex = 19599;

struct alignas(4) Struct_2_8B5D4EC2A0321DC2
{
	::Enum_3_CE80FD07999C5845 Field_2_2; // 0x10
	::Enum_3_2C704E2262533CBD Field_2_1; // 0x14
	::Struct_2_8B5D4EC2A0321DC2_Enum_3_F3CF2327D2AF8F0A Field_2_0; // 0x18
	::Struct_2_8B5D4EC2A0321DC2_Enum_3_D349BF5DA6B8181F Field_2_7; // 0x1C

	::System::Void _ctor(::Enum_3_CE80FD07999C5845 a1, ::Enum_3_2C704E2262533CBD a2, ::Struct_2_8B5D4EC2A0321DC2_Enum_3_F3CF2327D2AF8F0A a3, ::Struct_2_8B5D4EC2A0321DC2_Enum_3_D349BF5DA6B8181F a4)
	{
		return ((::System::Void(*)(::PVOID, ::Enum_3_CE80FD07999C5845, ::Enum_3_2C704E2262533CBD, ::Struct_2_8B5D4EC2A0321DC2_Enum_3_F3CF2327D2AF8F0A, ::Struct_2_8B5D4EC2A0321DC2_Enum_3_D349BF5DA6B8181F))((::PBYTE)hIl2Cpp + STRUCT_2_8B5D4EC2A0321DC2__CTOR_OFFSET))(this, a1, a2, a3, a4);
	}
};
