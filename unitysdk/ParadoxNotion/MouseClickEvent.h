#pragma once
#include "unitysdk/unitysdk.h"

namespace ParadoxNotion
{
	inline static constexpr unsigned int MouseClickEvent_TypeDefinitionIndex = 31010;

	enum class MouseClickEvent : ::System::Int32
	{
		MouseUp = 1,
		MouseDown = 0,
	};
}
