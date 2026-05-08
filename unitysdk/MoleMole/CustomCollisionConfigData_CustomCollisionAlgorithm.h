#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CustomCollisionConfigData_CustomCollisionAlgorithm_TypeDefinitionIndex = 78000;

	enum class CustomCollisionConfigData_CustomCollisionAlgorithm : ::System::Int32
	{
		Simple = 0,
		Spherical = 1,
		Volumetric = 2,
	};
}
