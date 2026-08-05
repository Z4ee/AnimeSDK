#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_FB90F8F234309AE5_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZoneLayer_PhotoItemWidgetController_LayerInfoContext; }

#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18ECF2F0)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18ECF380)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18ECEB10)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18ECEB70)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18ECF720)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER__ONCLICK_OFFSET UNITYSDK_OFFSET(0x18ECF400)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER__REFRESH_OFFSET UNITYSDK_OFFSET(0x18ECEC60)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18ECF780)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18ECF810)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18ECF8A0)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18ECF930)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZoneLayer_PhotoItemWidgetController_TypeDefinitionIndex = 66139;

	class UIHadalZoneLayer_PhotoItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_FB90F8F234309AE5_1* _view; // 0x2C0
		::MoleMole::UIHadalZoneLayer_PhotoItemWidgetController_LayerInfoContext* _curContext; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER__REFRESH_OFFSET))(this);
		}

		::System::Void _OnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER__ONCLICK_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
