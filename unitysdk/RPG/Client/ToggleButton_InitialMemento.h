#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client
{
	inline static constexpr unsigned int ToggleButton_InitialMemento_TypeDefinitionIndex = 66970;

	struct alignas(1) ToggleButton_InitialMemento
	{
		::System::Boolean IsOn; // 0x10
		::System::Boolean Interactable; // 0x11
	};
}
