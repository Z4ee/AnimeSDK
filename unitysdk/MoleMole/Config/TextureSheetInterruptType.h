#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int TextureSheetInterruptType_TypeDefinitionIndex = 50812;

	enum class TextureSheetInterruptType : ::System::Int32
	{
		Interrupt = 0,
		Queue = 1,
	};
}
