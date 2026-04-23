#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int LightCone3DColorType_TypeDefinitionIndex = 16601;

	enum class LightCone3DColorType : ::System::Int32
	{
		Cold = 1,
		Warm = 2,
	};
}
