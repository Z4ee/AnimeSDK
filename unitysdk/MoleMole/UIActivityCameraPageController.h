#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_D42991EF345557C6.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_324399ACB04F339E;
class Class_1_D375C91CCE5D3999;
class Class_2_70814665657ACDC9;
class Class_2_DFFFE237F8C2FE3E;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_CHECKACTIVITYEND_OFFSET UNITYSDK_OFFSET(0x18A28AE0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_CREATEBOUNTY_OFFSET UNITYSDK_OFFSET(0x18A26D20)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_CREATEEXPLORATION_OFFSET UNITYSDK_OFFSET(0x18A26DD0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GETDAYINDEX_OFFSET UNITYSDK_OFFSET(0x18A26930)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GETSELECTTABQUESTDAY_OFFSET UNITYSDK_OFFSET(0x18A27370)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GETTEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x18A26CD0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x18A27FB0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x18A26B40)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_INITTAB_OFFSET UNITYSDK_OFFSET(0x18A27410)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x18A27ED0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A28060)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONNOTIFYACTIVITYEND_OFFSET UNITYSDK_OFFSET(0x18A28460)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONPHOTOACTIVITYREFRESH_OFFSET UNITYSDK_OFFSET(0x18A28640)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONSETCLICKPRECHECKTAB_OFFSET UNITYSDK_OFFSET(0x18A27E00)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18A286D0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONTABSELECTED_OFFSET UNITYSDK_OFFSET(0x18A27F30)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18A28530)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A28A10)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A280F0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHSCROLLDATA_OFFSET UNITYSDK_OFFSET(0x18A26210)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x18A26E80)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHTABDAYUI_OFFSET UNITYSDK_OFFSET(0x18A27560)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHTAB_OFFSET UNITYSDK_OFFSET(0x18A27A30)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x18A28760)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x18A284E0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SELECTTAB_OFFSET UNITYSDK_OFFSET(0x18A27B40)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SETACTIVITYREWARDBTN_OFFSET UNITYSDK_OFFSET(0x18A287F0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18A27FC0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SHOWBOUNTYUI_OFFSET UNITYSDK_OFFSET(0x18A261A0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SHOWEXPLORATIONUI_OFFSET UNITYSDK_OFFSET(0x18A26A60)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x18A28A80)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18A28B30)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18A28CA0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18A28D30)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x18A28DD0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18A28DE0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18A28DF0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x18A28E00)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraPageController_TypeDefinitionIndex = 56026;

	class UIActivityCameraPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::Class_1_324399ACB04F339E*>* _questDayDic; // 0x328
		::System::Collections::Generic::List_1<::Class_1_324399ACB04F339E*>* _questDays; // 0x330
		::System::Int32 totalScore; // 0x338
		::Enum_3_D42991EF345557C6 CurPhotoActivityType; // 0x33C
		::System::Collections::Generic::List_1<::Class_1_324399ACB04F339E*>* _scrollViewDataList; // 0x340
		::System::Int32 _curTabIndex; // 0x348
		::System::Boolean _isSelectDayIndex; // 0x34C
		::System::Boolean _isSelectTabForce; // 0x34D
		::Class_2_DFFFE237F8C2FE3E* _view; // 0x350
		::MonoUITableScrollV2* _scrollView; // 0x358
		::Class_2_70814665657ACDC9* photoActivityModel; // 0x360
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* activityRewardBtn; // 0x368
		::System::Collections::Generic::List_1<::Class_1_D375C91CCE5D3999*>* activityDatas; // 0x370
		::System::Boolean _dirty; // 0x378

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void ShowBountyUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SHOWBOUNTYUI_OFFSET))(this);
		}

		::System::Void RefreshScrollData(::Enum_3_D42991EF345557C6 type)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_D42991EF345557C6))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHSCROLLDATA_OFFSET))(this, type);
		}

		::System::Int32 GetDayIndex()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GETDAYINDEX_OFFSET))(this);
		}

		::System::Void ShowExplorationUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SHOWEXPLORATIONUI_OFFSET))(this);
		}

		::System::Void InitScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_INITSCROLLVIEW_OFFSET))(this);
		}

		::System::Int32 GetTemplateIndex(::System::Int32 dataIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GETTEMPLATEINDEX_OFFSET))(this, dataIndex);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateBounty(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_CREATEBOUNTY_OFFSET))(this, controlReference);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateExploration(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_CREATEEXPLORATION_OFFSET))(this, controlReference);
		}

		::System::Void RefreshScrollView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHSCROLLVIEW_OFFSET))(this);
		}

		::System::Void InitTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_INITTAB_OFFSET))(this);
		}

		::System::Void RefreshTabDayUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHTABDAYUI_OFFSET))(this);
		}

		::System::Void RefreshTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHTAB_OFFSET))(this);
		}

		::Class_1_324399ACB04F339E* GetSelectTabQuestDay(::System::Int32 index)
		{
			return ((::Class_1_324399ACB04F339E*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GETSELECTTABQUESTDAY_OFFSET))(this, index);
		}

		::System::Boolean OnSetClickPreCheckTab(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONSETCLICKPRECHECKTAB_OFFSET))(this, index);
		}

		::System::Void OnClickTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONCLICKTAB_OFFSET))(this, index);
		}

		::System::Void SelectTab(::System::Int32 index, ::System::Boolean isForce)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SELECTTAB_OFFSET))(this, index, isForce);
		}

		::System::Void OnTabSelected(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONTABSELECTED_OFFSET))(this, index);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnNotifyActivityEnd(::Class_1_D375C91CCE5D3999* obj)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONNOTIFYACTIVITYEND_OFFSET))(this, obj);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnPhotoActivityRefresh(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONPHOTOACTIVITYREFRESH_OFFSET))(this, obj);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void CheckActivityEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_CHECKACTIVITYEND_OFFSET))(this);
		}

		::System::Void Refresh()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESH_OFFSET))(this);
		}

		::System::Void RefreshUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHUI_OFFSET))(this);
		}

		::System::Void SetActivityRewardBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SETACTIVITYREWARDBTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
