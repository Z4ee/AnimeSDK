#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int DragWhenInteractingType_TypeDefinitionIndex = 53295;

	enum class DragWhenInteractingType : ::System::Int32
	{
		Continue = 1,
		Interrupt = 0,
	};
}
