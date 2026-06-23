#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingLayer_TypeDefinitionIndex = 41690;

	enum class StreamingLayer : ::System::Int32
	{
		BIG = 1,
		LOWMEMORY = 8,
		EFFECT = 17,
		MIDDLE = 2,
		DECAL = 7,
		Value_4 = 4,
		CODE_CONTROLL_3 = 12,
		CODE_CONTROLL_4 = 13,
		GROUND = 6,
		CODE_CONTROLL_1 = 10,
		MAX = 18,
		Value_9 = 9,
		SMALLSHADOWPROXY = 14,
		CODE_CONTROLL_2 = 11,
		SMALL = 3,
		OBJECTSWITCH = 15,
		BRG = 16,
		ENVIROMENT = 5,
		INSTANCE = 0,
	};
}
