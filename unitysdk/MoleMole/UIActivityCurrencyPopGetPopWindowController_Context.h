#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIACTIVITYCURRENCYPOPGETPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1643F0E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCurrencyPopGetPopWindowController_Context_TypeDefinitionIndex = 79896;

	class UIActivityCurrencyPopGetPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 CurrencyItemID; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCURRENCYPOPGETPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
