#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DragWhenInteractingType_TypeDefinitionIndex = 79598;

	enum class DragWhenInteractingType : ::System::Int32
	{
		Interrupt = 0,
		Continue = 1,
	};
}
