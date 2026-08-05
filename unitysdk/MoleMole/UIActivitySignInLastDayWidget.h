#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_3_AE02BC8285203464_18;
namespace MoleMole { class UIActivitySignInPopWindowController; }

#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_REFRESHLASTDAYINFO_OFFSET UNITYSDK_OFFSET(0x191FFBE0)
#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETDAYDATA_OFFSET UNITYSDK_OFFSET(0x191FFC20)
#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETPOPCONTROLLER_OFFSET UNITYSDK_OFFSET(0x191FFB90)
#define MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET__CTOR_OFFSET UNITYSDK_OFFSET(0x191FFC70)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInLastDayWidget_TypeDefinitionIndex = 76090;

	class UIActivitySignInLastDayWidget : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET__CTOR_OFFSET))(this);
		}

		::System::Void SetPopController(::MoleMole::UIActivitySignInPopWindowController* popController)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIActivitySignInPopWindowController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETPOPCONTROLLER_OFFSET))(this, popController);
		}

		::System::Void RefreshLastDayInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_REFRESHLASTDAYINFO_OFFSET))(this);
		}

		::System::Void SetDayData(::Class_3_AE02BC8285203464_18* task, ::Class_1_D375C91CCE5D3999* activityBaseData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_AE02BC8285203464_18*, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINLASTDAYWIDGET_SETDAYDATA_OFFSET))(this, task, activityBaseData);
		}
	};
}
