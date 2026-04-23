#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FormulaType_TypeDefinitionIndex = 13109;

	enum class FormulaType : ::System::Int32
	{
		Unknown = 0,
		Normal = 1,
		Sepcial = 2,
		SelectedRelic = 3,
	};
}
