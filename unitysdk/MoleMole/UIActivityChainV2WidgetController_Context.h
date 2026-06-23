#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_1_F71F7FB55BBEB1D9;

#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1A1E70F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityChainV2WidgetController_Context_TypeDefinitionIndex = 47895;

	class UIActivityChainV2WidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_1_F71F7FB55BBEB1D9* storeData; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
