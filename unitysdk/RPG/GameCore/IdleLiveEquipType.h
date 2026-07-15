#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveEquipType_TypeDefinitionIndex = 11340;

	enum class IdleLiveEquipType : ::System::Int32
	{
		None = 0,
		Normal = 1,
		Pet = 2,
	};
}
