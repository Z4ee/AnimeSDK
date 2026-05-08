#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_FB90F8F234309AE5_2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHadalZoneLayer_PhotoItemWidgetController_LayerInfoContext; }

#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1581C560)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1581C5F0)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1581BD90)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1581BDF0)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1581C940)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER__ONCLICK_OFFSET UNITYSDK_OFFSET(0x1581C670)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER__REFRESH_OFFSET UNITYSDK_OFFSET(0x1581BEE0)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1581C9A0)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1581CA30)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1581CAC0)
#define MOLEMOLE_UIHADALZONELAYER_PHOTOITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1581CB50)

namespace MoleMole
{
	inline static constexpr unsigned int UIHadalZoneLayer_PhotoItemWidgetController_TypeDefinitionIndex = 56667;

	class UIHadalZoneLayer_PhotoItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_FB90F8F234309AE5_2* _view; // 0x2B8
		::MoleMole::UIHadalZoneLayer_PhotoItemWidgetController_LayerInfoContext* _curContext; // 0x2C0

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
