#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_E75369D4A077D020;
template <typename T> class Class_0_16E4307DCC419505_164;

#define MOLEMOLE_UICOOPHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1854F240)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopHistoryCardRowWidgetController_Context_TypeDefinitionIndex = 76150;

	class UICoopHistoryCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_164<::Class_3_E75369D4A077D020*>* DisplayInfo; // 0x28
		::Class_0_16E4307DCC419505_164<::System::Boolean>* ShowPlatformNameButtonHolding; // 0x30
		::System::Int32 Index; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
