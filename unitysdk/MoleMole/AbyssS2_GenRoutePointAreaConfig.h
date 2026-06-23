#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int AbyssS2_GenRoutePointAreaConfig_TypeDefinitionIndex = 85697;

	struct alignas(4) AbyssS2_GenRoutePointAreaConfig
	{
		::System::Int32 routePointID; // 0x10
		::System::Int32 routeAreaID; // 0x14
		::System::Int32 routeAreaSerialID; // 0x18
	};
}
