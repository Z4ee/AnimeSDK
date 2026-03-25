#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int PropSelectionState_TypeDefinitionIndex = 48798;

	enum class PropSelectionState : ::System::Int32
	{
		Normal = 0,
		Hover = 1,
		Select = 2,
		Disable = 3,
	};
}
