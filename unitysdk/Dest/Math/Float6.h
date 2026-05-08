#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DEST_MATH_FLOAT6_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x9EDEB0)
#define DEST_MATH_FLOAT6_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x9EDF10)

namespace Dest::Math
{
	inline static constexpr unsigned int Float6_TypeDefinitionIndex = 33140;

	struct alignas(4) Float6
	{
		::System::Single _0; // 0x10
		::System::Single _1; // 0x14
		::System::Single _2; // 0x18
		::System::Single _3; // 0x1C
		::System::Single _4; // 0x20
		::System::Single _5; // 0x24

		::System::Single get_Item(::System::Int32 i)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_FLOAT6_GET_ITEM_OFFSET))(this, i);
		}

		::System::Void set_Item(::System::Int32 i, ::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + DEST_MATH_FLOAT6_SET_ITEM_OFFSET))(this, i, value);
		}
	};
}
