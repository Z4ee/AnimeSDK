#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

class Class_3_D35EB1783C283122;
template <typename T> class Class_0_16E4307DCC419505_153;

#define MOLEMOLE_UICOOPHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x1525D490)

namespace MoleMole
{
	inline static constexpr unsigned int UICoopHistoryCardRowWidgetController_Context_TypeDefinitionIndex = 59442;

	class UICoopHistoryCardRowWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::Class_0_16E4307DCC419505_153<::System::Boolean>* ShowPlatformNameButtonHolding; // 0x28
		::Class_0_16E4307DCC419505_153<::Class_3_D35EB1783C283122*>* DisplayInfo; // 0x30
		::System::Int32 Index; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOOPHISTORYCARDROWWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
