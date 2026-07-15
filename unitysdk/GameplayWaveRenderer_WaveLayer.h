#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

inline static constexpr unsigned int GameplayWaveRenderer_WaveLayer_TypeDefinitionIndex = 45522;

struct alignas(4) GameplayWaveRenderer_WaveLayer
{
	::System::Single amplitude; // 0x10
	::System::Single frequency; // 0x14
	::System::Single phase; // 0x18
	::System::Single speed; // 0x1C
};
