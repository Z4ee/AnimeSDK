#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DragWhenInteractingType_TypeDefinitionIndex = 53681;

	enum class DragWhenInteractingType : ::System::Int32
	{
		Interrupt = 0,
		Continue = 1,
	};
}
