#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TextureSheetInterruptType_TypeDefinitionIndex = 76929;

	enum class TextureSheetInterruptType : ::System::Int32
	{
		Queue = 1,
		Interrupt = 0,
	};
}
