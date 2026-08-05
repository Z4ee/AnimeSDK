#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_03024D6472FC8F3A.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/MoleMole/UIActivityPopBaseWindowController.h"

class Class_1_4865323EE33E9248;
class Class_1_B08665FEB7112467_1;
class Class_1_D375C91CCE5D3999;
class Class_2_291BB29F86C96673;
class Class_2_DAC3A10571973597;
class Class_3_AE02BC8285203464_18;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIActivitySignInLastDayWidget; }
namespace MoleMole { class UIActivitySignInWidgetBase; }
namespace MoleMole { class UIControlReference; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_APPLYOB30BOOKINGTIPS_OFFSET UNITYSDK_OFFSET(0x1A61FF80)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_CREATEV1DAYITEM_OFFSET UNITYSDK_OFFSET(0x1A61FBF0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_CREATEV2DAYITEM_OFFSET UNITYSDK_OFFSET(0x1A61FD40)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A61E330)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONACTIVITYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A61F580)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A61E610)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1A61EAF0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1A61ED20)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONPOPACTIVITYEND_OFFSET UNITYSDK_OFFSET(0x1A620450)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A61E6A0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A61E340)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_REFRESOKBTNINPUTKEY_OFFSET UNITYSDK_OFFSET(0x1A61EFA0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SELECTITEMFORNESTEDLIST_OFFSET UNITYSDK_OFFSET(0x1A61EBC0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETDAYLIST_OFFSET UNITYSDK_OFFSET(0x1A61F6A0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETLASTDAYINFO_OFFSET UNITYSDK_OFFSET(0x1A61FE90)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETLOGINACTIVITY_OFFSET UNITYSDK_OFFSET(0x1A61F100)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A61E580)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_TAKEALLREWARD_OFFSET UNITYSDK_OFFSET(0x1A6204B0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_TRYPARSEOB30WEBJSON_OFFSET UNITYSDK_OFFSET(0x1A6202D0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x1A61F290)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A620750)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A620830)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x1A6208C0)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONGAMEPADMODULESELECTINDEX_OFFSET UNITYSDK_OFFSET(0x1A620950)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A620A00)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A620A10)
#define MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A620A20)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivitySignInPopWindowController_TypeDefinitionIndex = 72550;

	class UIActivitySignInPopWindowController : public ::MoleMole::UIActivityPopBaseWindowController
	{
	public:
		::Class_2_DAC3A10571973597* _view; // 0x318
		::Class_2_291BB29F86C96673* _loginActivityData; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UIActivitySignInWidgetBase*>* _itemList; // 0x328
		::Class_3_AE02BC8285203464_18* sevenDay; // 0x330
		::MoleMole::UIActivitySignInLastDayWidget* lastDayController; // 0x338
		::System::Collections::Generic::List_1<::Class_1_B08665FEB7112467_1*>* signInDataList; // 0x340
		::System::Boolean _isSignInV2; // 0x348
		::Class_1_4865323EE33E9248* _popData; // 0x350
		::System::Int32 selectGamePadIndex; // 0x358
		::UnityEngine::GameObject* bgObject; // 0x360

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

		::MoleMole::ScrollViewItemWidgetController* CreateV1DayItem(::Enum_3_DBF2701137F18AA6 arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_CREATEV1DAYITEM_OFFSET))(this, arg1, arg2);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateV2DayItem(::Enum_3_DBF2701137F18AA6 arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_DBF2701137F18AA6, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_CREATEV2DAYITEM_OFFSET))(this, arg1, arg2);
		}

		::System::Void UpdateUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_UPDATEUI_OFFSET))(this);
		}

		::System::Void ApplyOb30BookingTips()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_APPLYOB30BOOKINGTIPS_OFFSET))(this);
		}

		static ::System::Boolean TryParseOb30WebJson(::System::String* webJsonStr, ::System::Boolean& isReservation, ::System::Boolean& isCollected)
		{
			return ((::System::Boolean(*)(::System::String*, ::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYSIGNINPOPWINDOWCONTROLLER_TRYPARSEOB30WEBJSON_OFFSET))(webJsonStr, isReservation, isCollected);
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
