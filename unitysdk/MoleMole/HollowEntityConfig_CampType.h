#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int HollowEntityConfig_CampType_TypeDefinitionIndex = 68296;

	enum class HollowEntityConfig_CampType : ::System::Int32
	{
		TeamKind = 4,
		TeamNeutral = 3,
		TeamGood = 2,
		TeamEvil = 1,
		Unknow = 999,
	};
}
