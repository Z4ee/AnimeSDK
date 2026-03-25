#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EdgeDetectionMode_TypeDefinitionIndex = 38380;

enum class EdgeDetectionMode : ::System::Int32
{
	None = 0,
	RisingEdge = 1,
	FallingEdge = 2,
};
