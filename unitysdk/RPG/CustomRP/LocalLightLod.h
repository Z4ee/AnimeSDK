#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int LocalLightLod_TypeDefinitionIndex = 29328;

	enum class LocalLightLod : ::System::Int32
	{
		Cull = -10,
		Lod0 = 0,
		Lod0ToFar = 1,
		LodFar = 2,
	};
}
