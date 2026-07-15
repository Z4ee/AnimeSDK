#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int MonoFogVolume_fogType_TypeDefinitionIndex = 67633;

	enum class MonoFogVolume_fogType : ::System::Int32
	{
		BaseFog = 0,
		HeightFog = 1,
		noiseFog = 2,
	};
}
