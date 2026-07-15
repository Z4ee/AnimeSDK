#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int DiceCombatPreviewValueType_TypeDefinitionIndex = 15525;

	enum class DiceCombatPreviewValueType : ::System::Int32
	{
		Attack = 0,
		Defense = 1,
		Heal = 2,
	};
}
