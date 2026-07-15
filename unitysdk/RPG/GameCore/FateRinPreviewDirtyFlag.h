#pragma once
#include "unitysdk/unitysdk.h"

namespace RPG::GameCore
{
	inline static constexpr unsigned int FateRinPreviewDirtyFlag_TypeDefinitionIndex = 53440;

	enum class FateRinPreviewDirtyFlag : ::System::Byte
	{
		None = 0x0,
		BaseConfig = 0x1,
		Modifier = 0x2,
		Property = 0x4,
		Full = 0xFF,
	};
}
