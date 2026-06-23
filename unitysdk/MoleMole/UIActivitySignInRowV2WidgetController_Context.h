#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYSIGNINROWV2WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1875D1A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInRowV2WidgetController_Context_TypeDefinitionIndex = 66184;

	class UIActivitySignInRowV2WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Boolean UseConsoleSettingV2; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINROWV2WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
