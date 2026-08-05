#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_0_16E4307DCC419505_36;
class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_87;
class Class_2_79AE422BA06F6D26_260;
class Class_3_0ECDE22EF9FEEAE2;
class Class_3_8280730987DC22B2_7;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_GET_ALLFINISHED_OFFSET UNITYSDK_OFFSET(0x168BEEB0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONBEFOREREWARDWINDOWCLOSE_OFFSET UNITYSDK_OFFSET(0x168C0C10)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168BE1E0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x168C0D10)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONREWARDWINDOWCLOSED_OFFSET UNITYSDK_OFFSET(0x168C0CC0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168BEA80)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168BE2A0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168BE600)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x168BE6C0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHDELIVERBTN_OFFSET UNITYSDK_OFFSET(0x168C0120)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHMATERIALPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x168BFC20)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHMATERIALVIEW_OFFSET UNITYSDK_OFFSET(0x168BF250)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x168BF790)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x168BEAF0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETALLFINISHEDVIEW_OFFSET UNITYSDK_OFFSET(0x168BEF10)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x168C0240)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x168BE9E0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SHOWGETITEMLIST_OFFSET UNITYSDK_OFFSET(0x168C0940)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SUBMITLANDITEMS_OFFSET UNITYSDK_OFFSET(0x168C06A0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x168C1050)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x168C1110)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__REFRESHVIEW_B__27_0_OFFSET UNITYSDK_OFFSET(0x168C12A0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__SUBMITLANDITEMS_B__31_0_OFFSET UNITYSDK_OFFSET(0x168C1530)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x168C1590)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x168C1620)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x168C1630)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x168C1640)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x168C1650)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalPageController_TypeDefinitionIndex = 89650;

	class UIMainCityRevivalPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* LevelUpAnimation; // 0x0
		// static const ::System::Single MaterialProgressDuration; // 0x0
		// static const ::System::String* LevelUpSoundKey; // 0x0
		// static const ::System::String* ProgressValueFormat; // 0x0
		::Class_2_79AE422BA06F6D26_260* _view; // 0x328
		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* _availableItems; // 0x330
		::System::Int32 _landID; // 0x338
		::Class_3_0ECDE22EF9FEEAE2* _progress; // 0x340
		::System::Int32 _prvLv; // 0x348
		::System::Int32 _curLv; // 0x34C
		::System::Int32 _materialItemID; // 0x350
		::System::Int32 _prvSubmittedCount; // 0x354
		::System::Int32 _prvTargetCount; // 0x358
		::System::Int32 _curSubmittedCount; // 0x35C
		::System::Int32 _curTargetCount; // 0x360
		::Class_1_0D6706375CDAAE8C* _material; // 0x368
		::Class_3_8280730987DC22B2_7* _rewardedItems; // 0x370
		::System::Single _progressOffset; // 0x378
		::System::Single _maxProgressValue; // 0x37C
		::MoleMole::UIItemIconBtnWidgetController* _materialIconWidget; // 0x380
		::System::Boolean _isShowingGetItemList; // 0x388

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshData(::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHDATA_OFFSET))(this, init);
		}

		::System::Void RefreshView(::Class_2_208CC9941471731A_87* landTemplate, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_87*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, landTemplate, init);
		}

		::System::Void RefreshMaterialView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHMATERIALVIEW_OFFSET))(this);
		}

		::System::Void RefreshRewardView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET))(this);
		}

		::System::Void RefreshMaterialProgressView(::System::Single curProgress, ::System::Single prvProgress, ::System::Action* onDone)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHMATERIALPROGRESSVIEW_OFFSET))(this, curProgress, prvProgress, onDone);
		}

		::System::Void SubmitLandItems()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SUBMITLANDITEMS_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Single progress)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETPROGRESS_OFFSET))(this, progress);
		}

		::System::Void ShowGetItemList(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SHOWGETITEMLIST_OFFSET))(this, items);
		}

		::System::Void OnBeforeRewardWindowClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONBEFOREREWARDWINDOWCLOSE_OFFSET))(this);
		}

		::System::Void OnRewardWindowClosed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONREWARDWINDOWCLOSED_OFFSET))(this);
		}

		::System::Void OnItemChanged(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, eventArgs);
		}

		::System::Boolean get_AllFinished()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_GET_ALLFINISHED_OFFSET))(this);
		}

		::System::Void RefreshDeliverBtn(::System::Boolean enable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHDELIVERBTN_OFFSET))(this, enable);
		}

		::System::Void SetAllFinishedView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETALLFINISHEDVIEW_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void _RefreshView_b__27_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__REFRESHVIEW_B__27_0_OFFSET))(this);
		}

		::System::Void _SubmitLandItems_b__31_0(::Class_0_16E4307DCC419505_36* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_36*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__SUBMITLANDITEMS_B__31_0_OFFSET))(this, message);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
