#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CampType_TypeDefinitionIndex = 72972;

	enum class CampType : ::System::Int32
	{
		Unknow = 999,
		TeamNeutral = 3,
		TeamMember = 5,
		TeamGood = 2,
		TeamEvil = 1,
		TeamKind = 4,
	};
}
