#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_CampType_TypeDefinitionIndex = 70055;

	enum class HollowEntityConfig_CampType : ::System::Int32
	{
		Unknow = 999,
		TeamEvil = 1,
		TeamKind = 4,
		TeamNeutral = 3,
		TeamGood = 2,
	};
}
