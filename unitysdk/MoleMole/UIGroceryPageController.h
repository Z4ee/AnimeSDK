#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_8469E7523673A92C_16;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGroceryChildWindowController; }

#define MOLEMOLE_UIGROCERYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BDC460)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17BDC4F0)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BDC750)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BDBD00)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BDC110)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17BDC6B0)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17BDC8B0)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17BDC8C0)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17BDC950)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17BDC980)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x17BDC990)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17BDC9A0)
#define MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x17BDC9B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGroceryPageController_TypeDefinitionIndex = 80269;

	class UIGroceryPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::Int32 ShopId = 0x1; // 0x0
		::Class_2_8469E7523673A92C_16* _view; // 0x328
		::MoleMole::UIGroceryChildWindowController* _groceryChildWindow; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGROCERYPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
