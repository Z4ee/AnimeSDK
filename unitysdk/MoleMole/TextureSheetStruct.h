#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/TextureSheetType.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace MoleMole
{
	inline static constexpr unsigned int TextureSheetStruct_TypeDefinitionIndex = 66288;

	struct alignas(8) TextureSheetStruct
	{
		::System::String* sheetKey; // 0x10
		::MoleMole::TextureSheetType sheetType; // 0x18
	};
}
