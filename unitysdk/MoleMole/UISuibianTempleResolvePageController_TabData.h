#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UISuibianTempleResolvePageController_ResolveType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleResolvePageController_TabData_TypeDefinitionIndex = 74099;

	struct alignas(4) UISuibianTempleResolvePageController_TabData
	{
		::MoleMole::UISuibianTempleResolvePageController_ResolveType Type; // 0x10
		::System::Int32 lockid; // 0x14
	};
}
