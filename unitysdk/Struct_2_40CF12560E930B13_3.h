#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_9987F8BE23C5B991.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_40CF12560E930B13_3_EQUALS_OFFSET UNITYSDK_OFFSET(0x736DC0)
#define STRUCT_2_40CF12560E930B13_3_GETHASHCODE_OFFSET UNITYSDK_OFFSET(0x736E20)

inline static constexpr unsigned int Struct_2_40CF12560E930B13_3_TypeDefinitionIndex = 56095;

struct alignas(1) Struct_2_40CF12560E930B13_3
{
	::System::Boolean Equals(::Enum_3_9987F8BE23C5B991 a1, ::Enum_3_9987F8BE23C5B991 a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::Enum_3_9987F8BE23C5B991, ::Enum_3_9987F8BE23C5B991))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_3_EQUALS_OFFSET))(this, a1, a2);
	}

	::System::Int32 GetHashCode(::Enum_3_9987F8BE23C5B991 a1)
	{
		return ((::System::Int32(*)(::PVOID, ::Enum_3_9987F8BE23C5B991))((::PBYTE)hIl2Cpp + STRUCT_2_40CF12560E930B13_3_GETHASHCODE_OFFSET))(this, a1);
	}
};
