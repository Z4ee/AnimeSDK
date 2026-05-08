#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int MouseClickEvent_TypeDefinitionIndex = 27382;

	enum class MouseClickEvent : ::System::Int32
	{
		MouseDown = 0,
		MouseUp = 1,
	};
}
