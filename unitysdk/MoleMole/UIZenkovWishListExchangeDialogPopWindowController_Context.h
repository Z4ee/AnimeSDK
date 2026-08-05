#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVWISHLISTEXCHANGEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15B18770)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListExchangeDialogPopWindowController_Context_TypeDefinitionIndex = 51257;

	class UIZenkovWishListExchangeDialogPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::UInt32 SrcId; // 0x28
		::System::UInt32 SrcType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTEXCHANGEDIALOGPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
