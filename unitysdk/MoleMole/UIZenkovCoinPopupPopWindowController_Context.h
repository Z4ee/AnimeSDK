#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

#define MOLEMOLE_UIZENKOVCOINPOPUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1749DFA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIZenkovCoinPopupPopWindowController_Context_TypeDefinitionIndex = 76111;

	class UIZenkovCoinPopupPopWindowController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::Int32 CoinNum; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIZENKOVCOINPOPUPPOPWINDOWCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
