#pragma once
#include "unitysdk/unitysdk.h"

namespace NapStreaming
{
	inline static constexpr unsigned int POIGroupMask_TypeDefinitionIndex = 82817;

	enum class POIGroupMask : ::System::Int32
	{
		G8 = 128,
		G16 = 32768,
		G5 = 16,
		G2 = 2,
		G4 = 8,
		G12 = 2048,
		G6 = 32,
		G1 = 1,
		G3 = 4,
		G13 = 4096,
		G10 = 512,
		G14 = 8192,
		G15 = 16384,
		ALL = 65535,
		G11 = 1024,
		G9 = 256,
		G7 = 64,
	};
}
