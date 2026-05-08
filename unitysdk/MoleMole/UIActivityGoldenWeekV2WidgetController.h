#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_11;
class Class_1_1D6B384C0B7DC7C3;
class Class_1_D375C91CCE5D3999;
class Class_2_604149159BD159AA;
class Class_2_B7A68D43387CE5B2;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityGoldenWeekV2WidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_INITTABUIVIEW_OFFSET UNITYSDK_OFFSET(0x1632D4F0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONCLICKDETAILSICONBTN_OFFSET UNITYSDK_OFFSET(0x1632E2B0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONCLICKTABLEROW_OFFSET UNITYSDK_OFFSET(0x1632DEE0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x1632D950)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1632D2D0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1632CF20)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1632D360)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1632CAD0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1632CB30)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_REFRESHREMAINTIMERTEXT_OFFSET UNITYSDK_OFFSET(0x1632DE10)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_REFRESHSHOWTABLE_OFFSET UNITYSDK_OFFSET(0x1632CFB0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_SHOWTABLEUIVIEWEMPTY_OFFSET UNITYSDK_OFFSET(0x1632D850)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_SHOWTABLEUIVIEW_OFFSET UNITYSDK_OFFSET(0x1632DBD0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x1632DB80)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1632D470)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1632E310)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER__ONCLICKTABLEROW_B__28_0_OFFSET UNITYSDK_OFFSET(0x1632E490)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER__REFRESHREMAINTIMERTEXT_B__27_0_OFFSET UNITYSDK_OFFSET(0x1632E460)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1632E4A0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1632E530)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1632E5D0)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1632E660)
#define MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x1632E6F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityGoldenWeekV2WidgetController_TypeDefinitionIndex = 54657;

	class UIActivityGoldenWeekV2WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIActivityGoldenWeekV2WidgetController_Context* _context; // 0x2B8
		::Class_2_B7A68D43387CE5B2* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Class_1_D375C91CCE5D3999*>* MissonDataList; // 0x2C8
		::System::Collections::Generic::List_1<::Class_1_1D6B384C0B7DC7C3*>* _taskLists; // 0x2D0
		::UnityEngine::UI::Extension::UITabButtonGroup* _TabGroup; // 0x2D8
		::MonoUITableScrollV2* _ScrollView; // 0x2E0
		::Class_1_D375C91CCE5D3999* _selectActivityData; // 0x2E8
		::System::Int32 _curTabIndex; // 0x2F0
		::System::Int32 _curSelectTabIndex; // 0x2F4
		::System::Boolean _showActivityEnd; // 0x2F8
		::Class_2_604149159BD159AA* _uiActivityModel; // 0x300
		::System::Boolean _refreshDirty; // 0x308
		::System::Boolean isPlayTabEffect; // 0x309
		::Foundation::Coroutine::CoroutineHandle changeHandle; // 0x30C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void InitTabUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_INITTABUIVIEW_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::System::Void UpdateUI(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_UPDATEUI_OFFSET))(this, arg);
		}

		::System::Void RefreshShowTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_REFRESHSHOWTABLE_OFFSET))(this);
		}

		::System::Void ShowTableUIViewEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_SHOWTABLEUIVIEWEMPTY_OFFSET))(this);
		}

		::System::Void ShowTableUIView(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_SHOWTABLEUIVIEW_OFFSET))(this, index);
		}

		::System::Void RefreshRemainTimerText(::Class_1_D375C91CCE5D3999* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_REFRESHREMAINTIMERTEXT_OFFSET))(this, data);
		}

		::System::Void OnClickTableRow(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONCLICKTABLEROW_OFFSET))(this, index);
		}

		::System::Void OnClickDetailsIconBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER_ONCLICKDETAILSICONBTN_OFFSET))(this);
		}

		::System::Void _RefreshRemainTimerText_b__27_0(::UnityEngine::UI::Extension::UITimeWidget* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER__REFRESHREMAINTIMERTEXT_B__27_0_OFFSET))(this, t);
		}

		::System::Void _OnClickTableRow_b__28_0(::Class_0_16E4307DCC419505_11* rspMsg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER__ONCLICKTABLEROW_B__28_0_OFFSET))(this, rspMsg);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYGOLDENWEEKV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
