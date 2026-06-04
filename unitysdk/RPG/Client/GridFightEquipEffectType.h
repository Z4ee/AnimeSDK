#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int GridFightEquipEffectType_TypeDefinitionIndex = 60844;

	enum class GridFightEquipEffectType : ::System::Int32
	{
		Normal = 0,
		Trash = 1,
	};
}
