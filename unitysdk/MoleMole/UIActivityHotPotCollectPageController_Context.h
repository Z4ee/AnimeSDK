#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYHOTPOTCOLLECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x16765360)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCollectPageController_Context_TypeDefinitionIndex = 70141;

	class UIActivityHotPotCollectPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOLLECTPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
