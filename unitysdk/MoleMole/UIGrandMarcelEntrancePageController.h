#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_930834BDFA802194;
class Class_2_5C38134D4169B6E0;
class Class_2_C66DEC328A595BAB_3;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFadeConfig; }
namespace MoleMole { class UIGrandMarcelEntrancePageContext; }
namespace MoleMole { class UIGrandMarcelMapRightWidgetController; }
namespace System { class String; }

#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_GETOVERRIDEFADEINANIM_OFFSET UNITYSDK_OFFSET(0x18AEA970)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_GETOVERRIDEFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x18AEA9D0)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18AE9FB0)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONCLOSEBTNTRIGGERED_OFFSET UNITYSDK_OFFSET(0x18AEA890)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONCONFIRMBTNTRIGGERED_OFFSET UNITYSDK_OFFSET(0x18AEA900)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AE9FC0)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18AEA2D0)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AEA730)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AEA0E0)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18AEA050)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18AEAA70)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_GETOVERRIDEFADEINANIM_OFFSET UNITYSDK_OFFSET(0x18AEAA80)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_GETOVERRIDEFADEOUTANIM_OFFSET UNITYSDK_OFFSET(0x18AEAA90)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18AEAAA0)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18AEAB30)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18AEAB40)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18AEAB50)
#define MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18AEAB60)

namespace MoleMole
{
	inline static constexpr unsigned int UIGrandMarcelEntrancePageController_TypeDefinitionIndex = 87664;

	class UIGrandMarcelEntrancePageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::String* ConfirmFadeInAnim; // 0x0
		// static const ::System::String* ConfirmFadeOutAnim; // 0x0
		::Class_2_C66DEC328A595BAB_3* _view; // 0x318
		::Class_2_5C38134D4169B6E0* _propertyAllocateHelper; // 0x320
		::MoleMole::UIGrandMarcelMapRightWidgetController* _widget; // 0x328
		::Class_1_930834BDFA802194* _data; // 0x330
		::System::Boolean _isCloseByConfirmBtn; // 0x338
		::MoleMole::UIGrandMarcelEntrancePageContext* _context; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showContextBase)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONSHOW_OFFSET))(this, showContextBase);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnCloseBtnTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONCLOSEBTNTRIGGERED_OFFSET))(this);
		}

		::System::Void OnConfirmBtnTriggered()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_ONCONFIRMBTNTRIGGERED_OFFSET))(this);
		}

		::System::String* GetOverrideFadeInAnim(::MoleMole::UIFadeConfig* fadeData, ::Enum_3_DBF2701137F18AA6 fromCtrl)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_DBF2701137F18AA6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_GETOVERRIDEFADEINANIM_OFFSET))(this, fadeData, fromCtrl);
		}

		::System::String* GetOverrideFadeOutAnim(::MoleMole::UIFadeConfig* fadeData, ::Enum_3_DBF2701137F18AA6 fromCtrl)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_DBF2701137F18AA6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER_GETOVERRIDEFADEOUTANIM_OFFSET))(this, fadeData, fromCtrl);
		}

		::System::String* __base_GetOverrideFadeInAnim(::MoleMole::UIFadeConfig* P0, ::Enum_3_DBF2701137F18AA6 P1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_DBF2701137F18AA6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_GETOVERRIDEFADEINANIM_OFFSET))(this, P0, P1);
		}

		::System::String* __base_GetOverrideFadeOutAnim(::MoleMole::UIFadeConfig* P0, ::Enum_3_DBF2701137F18AA6 P1)
		{
			return ((::System::String*(*)(::PVOID, ::MoleMole::UIFadeConfig*, ::Enum_3_DBF2701137F18AA6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_GETOVERRIDEFADEOUTANIM_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGRANDMARCELENTRANCEPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
