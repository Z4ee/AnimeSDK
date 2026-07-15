#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomAdditionalLightData_LTCAreaLightType_TypeDefinitionIndex = 36165;

	enum class CustomAdditionalLightData_LTCAreaLightType : ::System::Int32
	{
		None = 0,
		Quad = 1,
		Disk = 2,
		Fast_Quad = 3,
	};
}
