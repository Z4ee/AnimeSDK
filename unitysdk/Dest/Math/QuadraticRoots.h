#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define DEST_MATH_QUADRATICROOTS_GET_ITEM_OFFSET UNITYSDK_OFFSET(0xA8D800)

namespace Dest::Math
{
	inline static constexpr unsigned int QuadraticRoots_TypeDefinitionIndex = 34760;

	struct alignas(4) QuadraticRoots
	{
		::System::Single X0; // 0x10
		::System::Single X1; // 0x14
		::System::Int32 RootCount; // 0x18

		::System::Single get_Item(::System::Int32 rootIndex)
		{
			return ((::System::Single(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + DEST_MATH_QUADRATICROOTS_GET_ITEM_OFFSET))(this, rootIndex);
		}
	};
}
