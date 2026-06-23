#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LanguageAligmentPref.h"
#include "unitysdk/MoleMole/Config/LanguageFontConfig.h"
#include "unitysdk/MoleMole/LanguageType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageFontMap_TypeDefinitionIndex = 79168;

	struct alignas(8) LanguageFontMap
	{
		::MoleMole::LanguageType languageType; // 0x10
		::System::String* fontName; // 0x18
		::System::String* lightFontName; // 0x20
		::System::Int32 lightFontSize; // 0x28
		::MoleMole::Config::LanguageFontConfig MobileFontConfig; // 0x2C
		::MoleMole::Config::LanguageFontConfig NotMobileFontConfig; // 0x34
		::MoleMole::Config::LanguageAligmentPref aligmentPrefer; // 0x3C
	};
}
