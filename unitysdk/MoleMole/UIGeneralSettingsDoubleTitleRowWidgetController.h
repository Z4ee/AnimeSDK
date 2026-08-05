#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_5E2FBACADDB625B7_12;
namespace MoleMole { class UIControlReference; }

#define MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19601DE0)
#define MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19601E70)
#define MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x19601EF0)
#define MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19601F50)
#define MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19601FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralSettingsDoubleTitleRowWidgetController_TypeDefinitionIndex = 48359;

	class UIGeneralSettingsDoubleTitleRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5E2FBACADDB625B7_12* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALSETTINGSDOUBLETITLEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
