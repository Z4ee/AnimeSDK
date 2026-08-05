#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int StreamingLayer_TypeDefinitionIndex = 81525;

	enum class StreamingLayer : ::System::Int32
	{
		CODE_CONTROLL_3 = 12,
		COLLIDER = 18,
		LOWMEMORY = 8,
		Value_4 = 4,
		SMALLSHADOWPROXY = 14,
		MAX = 22,
		SMALL = 3,
		OBJECTSWITCH = 15,
		Value_9 = 9,
		AIRWALL = 21,
		BIG = 1,
		CODE_CONTROLL_2 = 11,
		MESHCOLLIDER = 19,
		DECAL = 7,
		GROUND = 6,
		ENVIROMENT = 5,
		EFFECT = 17,
		CODE_CONTROLL_1 = 10,
		BRG = 16,
		CODE_CONTROLL_4 = 13,
		MIDDLE = 2,
		INSTANCE = 0,
		BRGPREFAB = 20,
	};
}
