#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_4AE9DE3D2ED9A9E2;
class Class_1_53CA8DD43B51A652;
class Class_2_C8D1480001B76C22;
namespace MoleMole { class ShoppingMallLimitedCardRowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIShoppingMallLimitedCardItemWidgetController; }

#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14DB69B0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14DB6850)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14DB6A40)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14DB65C0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14DB67E0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB6AC0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14DB6B20)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x14DB6BB0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14DB6C50)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14DB6CE0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14DB6D70)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallLimitedCard02RowWidgetController_TypeDefinitionIndex = 41250;

	class UIShoppingMallLimitedCard02RowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C8D1480001B76C22* _view; // 0x2B8
		::MoleMole::ShoppingMallLimitedCardRowContext* _context; // 0x2C0
		::MoleMole::UIShoppingMallLimitedCardItemWidgetController* _item1Controller; // 0x2C8
		::MoleMole::UIShoppingMallLimitedCardItemWidgetController* _item2Controller; // 0x2D0
		::Class_1_4AE9DE3D2ED9A9E2* _loginFundRewardData; // 0x2D8
		::Class_1_53CA8DD43B51A652* _logic; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD02ROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
