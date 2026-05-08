#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIControllerContextBase.h"

namespace System { class String; }

#define MOLEMOLE_UIACTIVITYBLINDBOXREPORTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET UNITYSDK_OFFSET(0x12F288F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityBlindBoxReportItemWidgetController_Context_TypeDefinitionIndex = 67550;

	class UIActivityBlindBoxReportItemWidgetController_Context : public ::MoleMole::UIControllerContextBase
	{
	public:
		::System::String* InfoTitleKey; // 0x28
		::System::String* InfoIcon; // 0x30
		::System::Int32 InfoNum; // 0x38

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYBLINDBOXREPORTITEMWIDGETCONTROLLER_CONTEXT__CTOR_OFFSET))(this);
		}
	};
}
