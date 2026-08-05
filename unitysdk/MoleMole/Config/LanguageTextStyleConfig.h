#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int LanguageTextStyleConfig_TypeDefinitionIndex = 76385;

	struct alignas(8) LanguageTextStyleConfig
	{
		::System::String* fontName; // 0x10
		::System::Int32 imageHeightOverride; // 0x18
		::System::Single imgFontSizeMatchScale; // 0x1C
		::System::Int32 markTemplateOverride; // 0x20
		::System::Single underlineThicknessScaleOverride; // 0x24
		::System::Single underlineHeightOffsetOverride; // 0x28
	};
}
