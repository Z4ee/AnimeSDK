#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_284;
class Class_2_C348D4002D60FECA;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class ShoppingMallCardContext; }
namespace MoleMole { class UIAmerInfoWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_CLICKSHOWRULE_OFFSET UNITYSDK_OFFSET(0x15C24C10)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCLICKBUY_OFFSET UNITYSDK_OFFSET(0x15C24D30)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C24960)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15C251E0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15C249F0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C24B90)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C23DB0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15C24190)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_SHOWITEMTIPS_OFFSET UNITYSDK_OFFSET(0x15C24E80)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15C25520)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15C25580)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x15C25610)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0x15C25640)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15C256D0)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15C25760)
#define MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15C257F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIShoppingMallMemberWidgetController_TypeDefinitionIndex = 84287;

	class UIShoppingMallMemberWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_C348D4002D60FECA* _view; // 0x2C0
		::UnityEngine::Transform* _ameRoot; // 0x2C8
		::MoleMole::UIAmerInfoWidgetController* _amerInfoController; // 0x2D0
		::Class_0_16E4307DCC419505_284* data; // 0x2D8
		::MoleMole::ShoppingMallCardContext* _context; // 0x2E0
		::MoleMole::MonoGamepadCustomList* gamepadCustomList; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ClickShowRule()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_CLICKSHOWRULE_OFFSET))(this);
		}

		::System::Void OnClickBuy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONCLICKBUY_OFFSET))(this);
		}

		::System::Void ShowItemTips(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_SHOWITEMTIPS_OFFSET))(this, itemID);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISHOPPINGMALLMEMBERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
