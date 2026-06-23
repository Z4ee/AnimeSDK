#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageFontConfig_TypeDefinitionIndex = 71360;

	struct alignas(4) LanguageFontConfig
	{
		::System::Boolean Disable; // 0x10
		::System::Boolean OverrideParam; // 0x11
		::System::Int32 lightFontSize; // 0x14
	};
}
