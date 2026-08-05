#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_7BEEB90214042948_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFashionStoreKeyItemWidgetController_Context; }

#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x170D30E0)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x170D2FD0)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170D3060)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x170D2B40)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x170D2CA0)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_TRYREFRESHBYMINIGAMECONTEXT_OFFSET UNITYSDK_OFFSET(0x170D2D40)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_TRYREFRESHBYMUSICEDITCONTEXT_OFFSET UNITYSDK_OFFSET(0x170D2E30)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170D32C0)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x170D3320)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170D33B0)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x170D3440)
#define MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x170D34D0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFashionStoreKeyItemWidgetController_TypeDefinitionIndex = 42715;

	class UIFashionStoreKeyItemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_7BEEB90214042948_1* _view; // 0x2C0
		::System::Int32 m_keyID; // 0x2C8
		::MoleMole::UIFashionStoreKeyItemWidgetController_Context* _context; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean TryRefreshByMinigameContext(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_TRYREFRESHBYMINIGAMECONTEXT_OFFSET))(this, openCtrlContext);
		}

		::System::Boolean TryRefreshByMusicEditContext(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_TRYREFRESHBYMUSICEDITCONTEXT_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFASHIONSTOREKEYITEMWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
