#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_F2A455F9EA6FD712;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16AC4BC0)
#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16AC4D80)
#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16AC4AF0)
#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16AC4B50)
#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x16AC4EA0)
#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_SETDARK_OFFSET UNITYSDK_OFFSET(0x16AC4E00)
#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16AC55A0)
#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16AC5600)
#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16AC5690)
#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x16AC5720)
#define MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x16AC57B0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianProductInfoWidgetController_TypeDefinitionIndex = 81017;

	class UISuibianProductInfoWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_F2A455F9EA6FD712* _view; // 0x2C0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetDark(::System::Boolean dark)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_SETDARK_OFFSET))(this, dark);
		}

		::System::Void RefreshView(::System::Int32 productID, ::System::Int32 trendID, ::System::Int32 price, ::System::Boolean isDarkIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, productID, trendID, price, isDarkIcon);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANPRODUCTINFOWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
