#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_CampType_TypeDefinitionIndex = 40468;

	enum class HollowEntityConfig_CampType : ::System::Int32
	{
		TeamNeutral = 3,
		TeamKind = 4,
		Unknow = 999,
		TeamGood = 2,
		TeamEvil = 1,
	};
}
