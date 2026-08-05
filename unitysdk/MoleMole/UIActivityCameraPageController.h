#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_D42991EF345557C6.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_1_324399ACB04F339E;
class Class_1_D375C91CCE5D3999;
class Class_2_34577B1D661C6466;
class Class_2_FF12BAB6EE2B1ED0;
class MonoUITableScrollV2;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_CHECKACTIVITYEND_OFFSET UNITYSDK_OFFSET(0x1A6029F0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_CREATEBOUNTY_OFFSET UNITYSDK_OFFSET(0x1A600C20)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_CREATEEXPLORATION_OFFSET UNITYSDK_OFFSET(0x1A600CD0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GETDAYINDEX_OFFSET UNITYSDK_OFFSET(0x1A600830)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GETSELECTTABQUESTDAY_OFFSET UNITYSDK_OFFSET(0x1A601270)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GETTEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x1A600BD0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1A601EC0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_INITSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1A600A40)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_INITTAB_OFFSET UNITYSDK_OFFSET(0x1A601310)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONCLICKTAB_OFFSET UNITYSDK_OFFSET(0x1A601DE0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A601F70)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONNOTIFYACTIVITYEND_OFFSET UNITYSDK_OFFSET(0x1A602370)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONPHOTOACTIVITYREFRESH_OFFSET UNITYSDK_OFFSET(0x1A602550)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONSETCLICKPRECHECKTAB_OFFSET UNITYSDK_OFFSET(0x1A601D10)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A6025E0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONTABSELECTED_OFFSET UNITYSDK_OFFSET(0x1A601E40)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1A602440)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A602920)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A602000)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHSCROLLDATA_OFFSET UNITYSDK_OFFSET(0x1A600100)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0x1A600D80)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHTABDAYUI_OFFSET UNITYSDK_OFFSET(0x1A601460)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHTAB_OFFSET UNITYSDK_OFFSET(0x1A601940)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESHUI_OFFSET UNITYSDK_OFFSET(0x1A602670)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_REFRESH_OFFSET UNITYSDK_OFFSET(0x1A6023F0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SELECTTAB_OFFSET UNITYSDK_OFFSET(0x1A601A50)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SETACTIVITYREWARDBTN_OFFSET UNITYSDK_OFFSET(0x1A602700)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A601ED0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SHOWBOUNTYUI_OFFSET UNITYSDK_OFFSET(0x1A600090)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_SHOWEXPLORATIONUI_OFFSET UNITYSDK_OFFSET(0x1A600960)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x1A602990)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1A602A40)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1A602BB0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1A602C40)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x1A602CE0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1A602CF0)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x1A602D00)
#define MOLEMOLE_UIACTIVITYCAMERAPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x1A602D10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCameraPageController_TypeDefinitionIndex = 75644;

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
		::Class_2_34577B1D661C6466* _view; // 0x350
		::MonoUITableScrollV2* _scrollView; // 0x358
		::Class_2_FF12BAB6EE2B1ED0* photoActivityModel; // 0x360
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
