#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client::FateRin::Battle::HoverBrainStates
{
	inline static constexpr unsigned int FateRinHoverPointerEventKind_TypeDefinitionIndex = 79674;

	enum class FateRinHoverPointerEventKind : ::System::Int32
	{
		Hover = 0,
		HoverExit = 1,
		Press = 2,
		Drag = 3,
		Release = 4,
		Cancel = 5,
	};
}
