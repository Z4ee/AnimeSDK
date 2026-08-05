#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBangbooMicroWebPictureBookPopWindowController_PictureBookRowPendingAnimType.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole
{
	inline static constexpr unsigned int UIBangbooMicroWebPictureBookPopWindowController_PictureBookRowPendingAnim_TypeDefinitionIndex = 80384;

	struct alignas(4) UIBangbooMicroWebPictureBookPopWindowController_PictureBookRowPendingAnim
	{
		::System::Int32 DataIndex; // 0x10
		::System::UInt32 TreasureId; // 0x14
		::MoleMole::UIBangbooMicroWebPictureBookPopWindowController_PictureBookRowPendingAnimType Type; // 0x18
	};
}
