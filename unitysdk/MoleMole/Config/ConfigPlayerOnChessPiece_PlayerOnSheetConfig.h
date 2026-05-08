#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigPlayerOnChessPiece_PlayerOnSheetConfig_TypeDefinitionIndex = 81261;

	struct alignas(8) ConfigPlayerOnChessPiece_PlayerOnSheetConfig
	{
		::System::Boolean UseDefaultConfig; // 0x10
		::System::String* previewTextureSheetDataKey; // 0x18
		::System::Int32 preAudioID; // 0x20
		::System::String* loopTextureSheetDataKey; // 0x28
	};
}
