#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int ComprehensiveAttack_ExitConditionType_TypeDefinitionIndex = 66001;

	enum class ComprehensiveAttack_ExitConditionType : ::System::Int32
	{
		ByFrameCount = 1,
		ByNormalizedTime = 0,
	};
}
