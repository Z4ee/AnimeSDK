#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DEST_MATH_QUARTICROOTS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA75920)

namespace Dest::Math
{
	inline static constexpr unsigned int QuarticRoots_TypeDefinitionIndex = 34762;

	struct alignas(4) QuarticRoots
	{
		::System::Single X0; // 0x10
		::System::Single X1; // 0x14
		::System::Single X2; // 0x18
		::System::Single X3; // 0x1C
		::System::Int32 RootCount; // 0x20

		::System::Single get_Item(::System::Int32 rootIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUARTICROOTS_GET_ITEM_OFFSET))(this, rootIndex);
		}
	};
}
