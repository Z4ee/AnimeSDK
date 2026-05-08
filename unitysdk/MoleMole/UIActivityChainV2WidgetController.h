#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_11;
class Class_1_1D6B384C0B7DC7C3;
class Class_1_D375C91CCE5D3999;
class Class_2_604149159BD159AA;
class Class_2_7E6D72F133378CF7;
class MonoUITableScrollV2;
namespace MoleMole { class UIActivityChainV2WidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Sprite; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_CHECKSHOWEXCHANGEBTN_OFFSET UNITYSDK_OFFSET(0x12B3E950)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_DOCHANGETAB_OFFSET UNITYSDK_OFFSET(0x12B3DB80)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_INITTABSPRITES_OFFSET UNITYSDK_OFFSET(0x12B3C4B0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_INITTABUIVIEW_OFFSET UNITYSDK_OFFSET(0x12B3D320)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONCLICKEXCHANGEBTN_OFFSET UNITYSDK_OFFSET(0x12B3F0C0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONCLICKFETCHALLTASK_OFFSET UNITYSDK_OFFSET(0x12B3E1D0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONCLICKTABLEROW_OFFSET UNITYSDK_OFFSET(0x12B3EC60)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x12B3D950)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12B3CDB0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12B3C940)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12B3CE40)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12B3C0B0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12B3C170)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_REFRESHFETCHALLBTN_OFFSET UNITYSDK_OFFSET(0x12B3E580)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_REFRESHREMAINTIMERTEXT_OFFSET UNITYSDK_OFFSET(0x12B3E880)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_REFRESHSHOWTABLE_OFFSET UNITYSDK_OFFSET(0x12B3C9D0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_SHOWTABLEUIVIEWEMPTY_OFFSET UNITYSDK_OFFSET(0x12B3D850)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_SHOWTABLEUIVIEW_OFFSET UNITYSDK_OFFSET(0x12B3DFE0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_UPDATEUI_OFFSET UNITYSDK_OFFSET(0x12B3E530)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x12B3D2A0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER__CHECKSHOWEXCHANGEBTN_B__37_0_OFFSET UNITYSDK_OFFSET(0x12B3F650)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12B3F4B0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER__ONCLICKFETCHALLTASK_B__29_0_OFFSET UNITYSDK_OFFSET(0x12B3F600)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER__ONCLICKTABLEROW_B__36_0_OFFSET UNITYSDK_OFFSET(0x12B3F640)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER__REFRESHREMAINTIMERTEXT_B__34_0_OFFSET UNITYSDK_OFFSET(0x12B3F610)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12B3F6A0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12B3F730)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12B3F7D0)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12B3F860)
#define MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12B3F8F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityChainV2WidgetController_TypeDefinitionIndex = 47479;

	class UIActivityChainV2WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::MoleMole::UIActivityChainV2WidgetController_Context* _context; // 0x2B8
		::Class_2_7E6D72F133378CF7* _view; // 0x2C0
		::System::Collections::Generic::List_1<::Class_1_D375C91CCE5D3999*>* MissonDataList; // 0x2C8
		::Class_1_D375C91CCE5D3999* _exchangeData; // 0x2D0
		::System::Collections::Generic::List_1<::Class_1_1D6B384C0B7DC7C3*>* _taskLists; // 0x2D8
		::UnityEngine::UI::Extension::UITabButtonGroup* _TabGroup; // 0x2E0
		::MonoUITableScrollV2* _ScrollView; // 0x2E8
		::Class_1_D375C91CCE5D3999* _selectActivityData; // 0x2F0
		::System::Int32 _curTabIndex; // 0x2F8
		::System::Int32 _curSelectTabIndex; // 0x2FC
		::System::Boolean _showActivityEnd; // 0x300
		::Class_2_604149159BD159AA* _uiActivityModel; // 0x308
		::System::Boolean _refreshDirty; // 0x310
		::System::Boolean isPlayTabEffect; // 0x311
		::Foundation::Coroutine::CoroutineHandle changeHandle; // 0x314
		::UnityEngine::Sprite* _firstSelectSpr; // 0x318
		::UnityEngine::Sprite* _midSelectSpr; // 0x320
		::UnityEngine::Sprite* _lastSelectSpr; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void InitTabSprites()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_INITTABSPRITES_OFFSET))(this);
		}

		::System::Void InitTabUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_INITTABUIVIEW_OFFSET))(this);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::System::Void DoChangeTab(::System::Int32 targetIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_DOCHANGETAB_OFFSET))(this, targetIndex);
		}

		::System::Void OnClickFetchAllTask()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONCLICKFETCHALLTASK_OFFSET))(this);
		}

		::System::Void UpdateUI(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_UPDATEUI_OFFSET))(this, arg);
		}

		::System::Void RefreshShowTable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_REFRESHSHOWTABLE_OFFSET))(this);
		}

		::System::Void ShowTableUIViewEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_SHOWTABLEUIVIEWEMPTY_OFFSET))(this);
		}

		::System::Void ShowTableUIView(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_SHOWTABLEUIVIEW_OFFSET))(this, index);
		}

		::System::Void RefreshRemainTimerText(::Class_1_D375C91CCE5D3999* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_REFRESHREMAINTIMERTEXT_OFFSET))(this, data);
		}

		::System::Void RefreshFetchAllBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_REFRESHFETCHALLBTN_OFFSET))(this);
		}

		::System::Void OnClickTableRow(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONCLICKTABLEROW_OFFSET))(this, index);
		}

		::System::Void CheckShowExchangeBtn(::Class_1_D375C91CCE5D3999* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_CHECKSHOWEXCHANGEBTN_OFFSET))(this, data);
		}

		::System::Void OnClickExchangeBtn(::System::UInt32 attachedActivityId)
		{
			return ((::System::Void(*)(::PVOID, ::System::UInt32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER_ONCLICKEXCHANGEBTN_OFFSET))(this, attachedActivityId);
		}

		::System::Void _OnClickFetchAllTask_b__29_0(::Class_0_16E4307DCC419505_11* rspMsg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER__ONCLICKFETCHALLTASK_B__29_0_OFFSET))(this, rspMsg);
		}

		::System::Void _RefreshRemainTimerText_b__34_0(::UnityEngine::UI::Extension::UITimeWidget* t)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER__REFRESHREMAINTIMERTEXT_B__34_0_OFFSET))(this, t);
		}

		::System::Void _OnClickTableRow_b__36_0(::Class_0_16E4307DCC419505_11* rspMsg)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER__ONCLICKTABLEROW_B__36_0_OFFSET))(this, rspMsg);
		}

		::System::Void _CheckShowExchangeBtn_b__37_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER__CHECKSHOWEXCHANGEBTN_B__37_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCHAINV2WIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
