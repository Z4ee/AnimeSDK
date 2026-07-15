#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int InsertActionType_TypeDefinitionIndex = 17487;

	enum class InsertActionType : ::System::Int32
	{
		Normal = 0,
		UltraSkill = 1,
		Undefine = 2,
	};
}
