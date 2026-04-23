#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int GridFightEquipType_TypeDefinitionIndex = 12715;

	enum class GridFightEquipType : ::System::Int32
	{
		Normal = 0,
		Implants = 1,
	};
}
