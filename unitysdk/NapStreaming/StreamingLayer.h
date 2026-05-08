#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingLayer_TypeDefinitionIndex = 56248;

	enum class StreamingLayer : ::System::Int32
	{
		BIG = 1,
		Value_9 = 9,
		DECAL = 7,
		GROUND = 6,
		Value_4 = 4,
		CODE_CONTROLL_1 = 10,
		ENVIROMENT = 5,
		SMALL = 3,
		CODE_CONTROLL_3 = 12,
		MAX = 16,
		SMALLSHADOWPROXY = 14,
		INSTANCE = 0,
		CODE_CONTROLL_4 = 13,
		MIDDLE = 2,
		LOWMEMORY = 8,
		CODE_CONTROLL_2 = 11,
	};
}
