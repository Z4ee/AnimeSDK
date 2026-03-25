#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Class_1_5D7D12B9E06AB41E_StopReason_TypeDefinitionIndex = 56523;

enum class Class_1_5D7D12B9E06AB41E_StopReason : ::System::Int32
{
	None = 0,
	TravelToStation = 1,
	TravelToStationStopPoint = 2,
	Avoidance = 3,
	TravelToEnd = 4,
};
