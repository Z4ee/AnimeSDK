#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_GenConfigLimit_TypeDefinitionIndex = 85683;

	struct alignas(4) AbyssS2_GenConfigLimit
	{
		::System::Int32 fallFloorCount; // 0x10
		::System::Int32 fallRouteCount; // 0x14
	};
}
