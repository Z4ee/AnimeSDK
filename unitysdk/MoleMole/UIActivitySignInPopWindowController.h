#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_81A3942BCC6E42B5.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_4865323EE33E9248;
class Class_1_B08665FEB7112467_4;
class Class_1_D375C91CCE5D3999;
class Class_2_92618EF6874DD24E;
class Class_2_9C3FFDEB9E49C0B8;
class Class_3_AE02BC8285203464_7;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIActivitySignInLastDayWidget; }
namespace MoleMole { class UIActivitySignInWidgetBase; }
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_CREATEV1DAYITEM_OFFSET UNITYSDK_OFFSET(0x1644F430)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_CREATEV2DAYITEM_OFFSET UNITYSDK_OFFSET(0x1644F580)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1644DBF0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONACTIVITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1644EE30)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1644DED0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1644E3B0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1644E5E0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONPOPACTIVITYEND_OFFSET UNITYSDK_OFFSET(0x1644F7C0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1644DF60)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1644DC00)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_REFRESOKBTNINPUTKEY_OFFSET UNITYSDK_OFFSET(0x1644E860)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SELECTITEMFORNESTEDLIST_OFFSET UNITYSDK_OFFSET(0x1644E480)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETDAYLIST_OFFSET UNITYSDK_OFFSET(0x1644EF50)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETLASTDAYINFO_OFFSET UNITYSDK_OFFSET(0x1644F6D0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETLOGINACTIVITY_OFFSET UNITYSDK_OFFSET(0x1644E9D0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1644DE40)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_TAKEALLREWARD_OFFSET UNITYSDK_OFFSET(0x1644F820)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x1644EB50)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1644FAC0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1644FBB0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1644FC40)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1644FCD0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1644FD80)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1644FD90)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1644FDA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInPopWindowController_TypeDefinitionIndex = 77912;

	class UIActivitySignInPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_9C3FFDEB9E49C0B8* _view; // 0x310
		::Class_2_92618EF6874DD24E* _loginActivityData; // 0x318
		::System::Collections::Generic::List_1<::MoleMole::UIActivitySignInWidgetBase*>* _itemList; // 0x320
		::Class_3_AE02BC8285203464_7* sevenDay; // 0x328
		::MoleMole::UIActivitySignInLastDayWidget* lastDayController; // 0x330
		::System::Collections::Generic::List_1<::Class_1_B08665FEB7112467_4*>* signInDataList; // 0x338
		::System::Boolean _isSignInV2; // 0x340
		::Class_1_4865323EE33E9248* _popData; // 0x348
		::System::Int32 selectGamePadIndex; // 0x350
		::UnityEngine::GameObject* bgObject; // 0x358

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* gamepadModule, ::System::Int32 index, ::UnityEngine::Transform* trans, ::Enum_3_03024D6472FC8F3A result)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, gamepadModule, index, trans, result);
		}

		::System::Void RefresOKBtnInputKey()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_REFRESOKBTNINPUTKEY_OFFSET))(this);
		}

		::System::Void SetLoginActivity(::Class_1_4865323EE33E9248* popData, ::System::Boolean isSignInV2)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4865323EE33E9248*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETLOGINACTIVITY_OFFSET))(this, popData, isSignInV2);
		}

		::System::Void OnActivityChanged(::Class_1_D375C91CCE5D3999* activityBaseData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONACTIVITYCHANGED_OFFSET))(this, activityBaseData);
		}

		::System::Void SetDayList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETDAYLIST_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateV1DayItem(::Enum_3_81A3942BCC6E42B5 arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_81A3942BCC6E42B5, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_CREATEV1DAYITEM_OFFSET))(this, arg1, arg2);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateV2DayItem(::Enum_3_81A3942BCC6E42B5 arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_81A3942BCC6E42B5, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_CREATEV2DAYITEM_OFFSET))(this, arg1, arg2);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void OnPopActivityEnd(::UnityEngine::UI::Extension::UITimeWidget* timeWidget)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONPOPACTIVITYEND_OFFSET))(this, timeWidget);
		}

		::System::Void SetLastDayInfo(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETLASTDAYINFO_OFFSET))(this, arg);
		}

		::System::Void SelectItemForNestedList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SELECTITEMFORNESTEDLIST_OFFSET))(this);
		}

		::System::Void TakeAllReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_TAKEALLREWARD_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleSelectIndex(::MoleMole::MonoGamepadModule* P0, ::System::Int32 P1, ::UnityEngine::Transform* P2, ::Enum_3_03024D6472FC8F3A P3)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::Int32, ::UnityEngine::Transform*, ::Enum_3_03024D6472FC8F3A))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET))(this, P0, P1, P2, P3);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
