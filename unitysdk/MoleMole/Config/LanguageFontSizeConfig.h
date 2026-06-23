#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageFontSizeConfig_TypeDefinitionIndex = 82122;

	struct alignas(4) LanguageFontSizeConfig
	{
		::MoleMole::LanguageType languageType; // 0x10
		::System::Int32 minSizeOverwrite; // 0x14
		::System::Int32 maxSizeOverwrite; // 0x18
	};
}
