#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CampType_TypeDefinitionIndex = 69733;

	enum class CampType : ::System::Int32
	{
		TeamNeutral = 3,
		TeamGood = 2,
		TeamMember = 5,
		TeamEvil = 1,
		TeamKind = 4,
		Unknow = 999,
	};
}
