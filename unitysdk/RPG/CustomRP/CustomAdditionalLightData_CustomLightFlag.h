#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomAdditionalLightData_CustomLightFlag_TypeDefinitionIndex = 36167;

	enum class CustomAdditionalLightData_CustomLightFlag : ::System::Int32
	{
		None = 0,
		ForceLOD0 = 1,
		NotCull = 2,
	};
}
