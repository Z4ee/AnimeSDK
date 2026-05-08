#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EDebugMode_TypeDefinitionIndex = 38606;

enum class EDebugMode : ::System::Int32
{
	ShowVertexId = 1,
	ShowVertexUV = 3,
	None = 0,
	ShowVertexColor = 4,
	ShowSegmentId = 2,
};
