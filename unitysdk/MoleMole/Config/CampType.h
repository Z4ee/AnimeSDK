#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int CampType_TypeDefinitionIndex = 83383;

	enum class CampType : ::System::Int32
	{
		TeamEvil = 1,
		Unknow = 999,
		TeamKind = 4,
		TeamGood = 2,
		TeamNeutral = 3,
		TeamMember = 5,
	};
}
