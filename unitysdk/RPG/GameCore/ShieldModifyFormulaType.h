#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int ShieldModifyFormulaType_TypeDefinitionIndex = 23825;

	enum class ShieldModifyFormulaType : ::System::Int32
	{
		Default = 0,
		ByMaxShieldPercentage = 1,
		AddWithProperty = 2,
	};
}
