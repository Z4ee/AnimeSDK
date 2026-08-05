#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EDebugMode_TypeDefinitionIndex = 42780;

enum class EDebugMode : ::System::Int32
{
	None = 0,
	ShowVertexColor = 4,
	ShowSegmentId = 2,
	ShowVertexId = 1,
	ShowVertexUV = 3,
};
