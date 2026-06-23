#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_E05B53CB9D6F98D7.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYHOTPOTCOMBATPAGECONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x183CCD00)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityHotPotCombatPageController_Context_TypeDefinitionIndex = 46414;

	class UIActivityHotPotCombatPageController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 DefaultChapter; // 0x28
		::Enum_3_E05B53CB9D6F98D7 PageType; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYHOTPOTCOMBATPAGECONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
