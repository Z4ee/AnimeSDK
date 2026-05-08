#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CustomDamperUtility_DampingType_TypeDefinitionIndex = 49079;

	enum class CustomDamperUtility_DampingType : ::System::Int32
	{
		SpringCritical = 2,
		Normal = 0,
		Spring = 1,
	};
}
