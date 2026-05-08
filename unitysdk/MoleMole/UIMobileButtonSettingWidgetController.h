#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_76BDA31962EF0DA3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMobileButtonSettingWidgetController_Context; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x14D87DD0)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_MANUALONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14D87D00)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14D87B10)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONSLIDERVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x14D88260)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14D87BA0)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14D87A80)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONUIOPENINNER_OFFSET UNITYSDK_OFFSET(0x14D87D70)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x14D88120)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14D88410)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x14D88470)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14D88480)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14D88510)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14D885A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMobileButtonSettingWidgetController_TypeDefinitionIndex = 44681;

	class UIMobileButtonSettingWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_76BDA31962EF0DA3* _view; // 0x2B8
		::MoleMole::UIMobileButtonSettingWidgetController_Context* _context; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ManualOnUIOpen(::MoleMole::UIMobileButtonSettingWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMobileButtonSettingWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_MANUALONUIOPEN_OFFSET))(this, context);
		}

		::System::Void OnUIOpenInner(::MoleMole::UIMobileButtonSettingWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMobileButtonSettingWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONUIOPENINNER_OFFSET))(this, context);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean includeSlider)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, includeSlider);
		}

		::System::Void OnSliderValueChanged(::System::Single ratio)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONSLIDERVALUECHANGED_OFFSET))(this, ratio);
		}

		::System::Void _OnUIInit_b__2_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
