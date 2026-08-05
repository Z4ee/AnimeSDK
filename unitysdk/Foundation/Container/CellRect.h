#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

#define FOUNDATION_CONTAINER_CELLRECT_GET_ISNULL_OFFSET UNITYSDK_OFFSET(0xAA8240)

namespace Foundation::Container
{
	inline static constexpr unsigned int CellRect_TypeDefinitionIndex = 8799;

	struct alignas(4) CellRect
	{
		::System::Int32 MinX; // 0x10
		::System::Int32 MinZ; // 0x14
		::System::Int32 MaxX; // 0x18
		::System::Int32 MaxZ; // 0x1C

		::System::Boolean get_IsNull()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + FOUNDATION_CONTAINER_CELLRECT_GET_ISNULL_OFFSET))(this);
		}
	};
}
