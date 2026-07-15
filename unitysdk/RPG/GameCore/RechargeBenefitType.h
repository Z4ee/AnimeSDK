#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int RechargeBenefitType_TypeDefinitionIndex = 14028;

	enum class RechargeBenefitType : ::System::Int32
	{
		None = 0,
		ConsumeBenefit = 1,
		RechargeBenefit = 2,
	};
}
