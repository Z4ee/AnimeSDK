#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_76BDA31962EF0DA3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIMobileButtonSettingWidgetController_Context; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x179F22B0)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_MANUALONUIOPEN_OFFSET UNITYSDK_OFFSET(0x179F21E0)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179F1FF0)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONSLIDERVALUECHANGED_OFFSET UNITYSDK_OFFSET(0x179F2740)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179F2080)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179F1F50)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_ONUIOPENINNER_OFFSET UNITYSDK_OFFSET(0x179F2250)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x179F2600)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x179F28F0)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0x179F2950)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x179F2960)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x179F29F0)
#define MOLEMOLE_UIMOBILEBUTTONSETTINGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x179F2A80)

namespace MoleMole
{
	inline static constexpr unsigned int UIMobileButtonSettingWidgetController_TypeDefinitionIndex = 76478;

	class UIMobileButtonSettingWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_76BDA31962EF0DA3* _view; // 0x2C0
		::MoleMole::UIMobileButtonSettingWidgetController_Context* _context; // 0x2C8

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
