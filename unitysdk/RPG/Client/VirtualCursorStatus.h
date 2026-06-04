#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::Client
{
	inline static constexpr unsigned int VirtualCursorStatus_TypeDefinitionIndex = 68379;

	enum class VirtualCursorStatus : ::System::Int32
	{
		Normal = 1,
		Highlight = 2,
		Selected = 3,
	};
}
