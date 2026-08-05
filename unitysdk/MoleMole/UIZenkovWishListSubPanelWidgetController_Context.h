#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVWISHLISTSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x11496BE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovWishListSubPanelWidgetController_Context_TypeDefinitionIndex = 55847;

	class UIZenkovWishListSubPanelWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVWISHLISTSUBPANELWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
