#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CustomCollisionConfigData_CustomCollisionAlgorithm_TypeDefinitionIndex = 50493;

	enum class CustomCollisionConfigData_CustomCollisionAlgorithm : ::System::Int32
	{
		Volumetric = 2,
		Simple = 0,
		Spherical = 1,
	};
}
