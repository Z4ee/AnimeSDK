#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int CustomDamperUtility_DampingType_TypeDefinitionIndex = 66275;

	enum class CustomDamperUtility_DampingType : ::System::Int32
	{
		SpringCritical = 2,
		Spring = 1,
		Normal = 0,
	};
}
