#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::CustomRP
{
	inline static constexpr unsigned int CustomAdditionalLightData_AreaLightDelegateShapeType_TypeDefinitionIndex = 36166;

	enum class CustomAdditionalLightData_AreaLightDelegateShapeType : ::System::Int32
	{
		Sphere = 0,
		Box = 1,
		Mesh = 2,
	};
}
