#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYSIGNINSPECIALROWV2WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x15EA17E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInSpecialRowV2WidgetController_Context_TypeDefinitionIndex = 38339;

	class UIActivitySignInSpecialRowV2WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean UseConsoleSettingV2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINSPECIALROWV2WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
