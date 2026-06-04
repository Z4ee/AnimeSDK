#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Struct_2_640507420B9CBB65.h"
#include "unitysdk/Struct_2_75D6A6CD8F418D47.h"
#include "unitysdk/System/ValueType.h"

#define STRUCT_2_070A00258D76D4EF_GET_KEY_OFFSET UNITYSDK_OFFSET(0x1409D0)
#define STRUCT_2_070A00258D76D4EF_GET_VALUE_OFFSET UNITYSDK_OFFSET(0x2BCB260)
#define STRUCT_2_070A00258D76D4EF__CTOR_OFFSET UNITYSDK_OFFSET(0x2BCB210)

inline static constexpr unsigned int Struct_2_070A00258D76D4EF_TypeDefinitionIndex = 58139;

struct alignas(8) Struct_2_070A00258D76D4EF
{
	::Struct_2_640507420B9CBB65 _Key_k__BackingField; // 0x10
	::Struct_2_75D6A6CD8F418D47 _Value_k__BackingField; // 0x28

	::System::Void _ctor(::Struct_2_640507420B9CBB65 a1, ::Struct_2_75D6A6CD8F418D47 a2)
	{
		return ((::System::Void(*)(::PVOID, ::Struct_2_640507420B9CBB65, ::Struct_2_75D6A6CD8F418D47))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4EF__CTOR_OFFSET))(this, a1, a2);
	}

	::Struct_2_640507420B9CBB65 get_Key()
	{
		return ((::Struct_2_640507420B9CBB65(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4EF_GET_KEY_OFFSET))(this);
	}

	::Struct_2_75D6A6CD8F418D47 get_Value()
	{
		return ((::Struct_2_75D6A6CD8F418D47(*)(::PVOID))((::PBYTE)hIl2Cpp + STRUCT_2_070A00258D76D4EF_GET_VALUE_OFFSET))(this);
	}
};
