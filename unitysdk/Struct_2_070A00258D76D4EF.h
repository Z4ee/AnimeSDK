#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_2150278D7330DC8D.h"
#include "unitysdk/Struct_2_61420C2CA4EE5107.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_070A00258D76D4EF_GET_KEY_OFFSET UNITYSDK_OFFSET(0x13E50)
#define STRUCT_2_070A00258D76D4EF_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2DD76B0)
#define STRUCT_2_070A00258D76D4EF__CTOR_OFFSET UNITYSDK_OFFSET(0x82F170)

inline static constexpr unsigned int Struct_2_070A00258D76D4EF_TypeDefinitionIndex = 62241;

struct alignas(8) Struct_2_070A00258D76D4EF
{
	::Struct_2_61420C2CA4EE5107 _Key_k__BackingField; // 0x10
	::Struct_2_2150278D7330DC8D _Value_k__BackingField; // 0x28

	::System::Void _ctor(::Struct_2_61420C2CA4EE5107 a1, ::Struct_2_2150278D7330DC8D a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_61420C2CA4EE5107, ::Struct_2_2150278D7330DC8D))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4EF__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_61420C2CA4EE5107 get_Key()
	{
		return ((::Struct_2_61420C2CA4EE5107(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4EF_GET_KEY_OFFSET))(this);
	}

	::Struct_2_2150278D7330DC8D get_Value()
	{
		return ((::Struct_2_2150278D7330DC8D(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4EF_GET_VALUE_OFFSET))(this);
	}
};
