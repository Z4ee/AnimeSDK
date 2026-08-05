#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x18057F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlowerShopNewGuestPopWindowController_Context_TypeDefinitionIndex = 62738;

	class UIFlowerShopNewGuestPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 PopID; // 0x28
		::System::Int32 AccessID; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLOWERSHOPNEWGUESTPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
