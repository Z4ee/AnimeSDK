#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DEST_MATH_CUBICROOTS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA3F080)

namespace Dest::Math
{
	inline static constexpr unsigned int CubicRoots_TypeDefinitionIndex = 34761;

	struct alignas(4) CubicRoots
	{
		::System::Single X0; // 0x10
		::System::Single X1; // 0x14
		::System::Single X2; // 0x18
		::System::Int32 RootCount; // 0x1C

		::System::Single get_Item(::System::Int32 rootIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_CUBICROOTS_GET_ITEM_OFFSET))(this, rootIndex);
		}
	};
}
