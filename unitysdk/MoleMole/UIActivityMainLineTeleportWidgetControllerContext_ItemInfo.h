#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMainLineTeleportWidgetControllerContext_ItemInfo_TypeDefinitionIndex = 85577;

	struct alignas(4) UIActivityMainLineTeleportWidgetControllerContext_ItemInfo
	{
		::System::Int32 ItemID; // 0x10
		::System::Int32 CurProgress; // 0x14
		::System::Int32 TotalProgress; // 0x18
	};
}
