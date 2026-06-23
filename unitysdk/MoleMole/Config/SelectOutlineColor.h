#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace UnityEngine { class Gradient; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int SelectOutlineColor_TypeDefinitionIndex = 54971;

	struct alignas(8) SelectOutlineColor
	{
		::UnityEngine::Gradient* CursorSelectColor; // 0x10
		::UnityEngine::Gradient* EditingSelectColor; // 0x18
		::UnityEngine::Gradient* ErrorSelectColor; // 0x20
		::System::Single OutlineThickness; // 0x28
	};
}
