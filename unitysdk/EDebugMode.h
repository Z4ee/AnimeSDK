#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EDebugMode_TypeDefinitionIndex = 85078;

enum class EDebugMode : ::System::Int32
{
	ShowVertexColor = 4,
	ShowVertexId = 1,
	None = 0,
	ShowSegmentId = 2,
	ShowVertexUV = 3,
};
