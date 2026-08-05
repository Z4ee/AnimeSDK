#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_4AE9DE3D2ED9A9E2;
class Class_1_53CA8DD43B51A652;
class Class_2_1AE7AA27121819AA;
namespace MoleMole { class ShoppingMallLimitedCardRowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIShoppingMallLimitedCardItemWidgetController; }

#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15114350)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x151141F0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151143E0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15113F50)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15114180)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15114460)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x151144C0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15114550)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x151145F0)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15114680)
#define MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15114710)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallLimitedCard03RowWidgetController_TypeDefinitionIndex = 60164;

	class UIShoppingMallLimitedCard03RowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_1AE7AA27121819AA* _view; // 0x2C0
		::MoleMole::ShoppingMallLimitedCardRowContext* _context; // 0x2C8
		::MoleMole::UIShoppingMallLimitedCardItemWidgetController* _item1Controller; // 0x2D0
		::MoleMole::UIShoppingMallLimitedCardItemWidgetController* _item2Controller; // 0x2D8
		::Class_1_4AE9DE3D2ED9A9E2* _loginFundRewardData; // 0x2E0
		::Class_1_53CA8DD43B51A652* _logic; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLLIMITEDCARD03ROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
