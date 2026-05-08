#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_0_16E4307DCC419505_11;
class Class_1_0D6706375CDAAE8C;
class Class_2_208CC9941471731A_340;
class Class_2_79AE422BA06F6D26_206;
class Class_3_CAE257BB30FFAD12;
class Class_3_D0B68EB9E337E202_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_GET_ALLFINISHED_OFFSET UNITYSDK_OFFSET(0x13FBB700)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONBEFOREREWARDWINDOWCLOSE_OFFSET UNITYSDK_OFFSET(0x13FBD410)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13FBAA60)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x13FBD510)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONREWARDWINDOWCLOSED_OFFSET UNITYSDK_OFFSET(0x13FBD4C0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13FBB2E0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13FBAB20)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13FBAE70)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHDATA_OFFSET UNITYSDK_OFFSET(0x13FBAF30)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHDELIVERBTN_OFFSET UNITYSDK_OFFSET(0x13FBC920)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHMATERIALPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x13FBC420)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHMATERIALVIEW_OFFSET UNITYSDK_OFFSET(0x13FBBA60)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHREWARDVIEW_OFFSET UNITYSDK_OFFSET(0x13FBBFA0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x13FBB350)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETALLFINISHEDVIEW_OFFSET UNITYSDK_OFFSET(0x13FBB760)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x13FBCA40)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x13FBB240)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SHOWGETITEMLIST_OFFSET UNITYSDK_OFFSET(0x13FBD140)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_SUBMITLANDITEMS_OFFSET UNITYSDK_OFFSET(0x13FBCEB0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x13FBD850)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x13FBD910)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__REFRESHVIEW_B__27_0_OFFSET UNITYSDK_OFFSET(0x13FBDA70)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__SUBMITLANDITEMS_B__31_0_OFFSET UNITYSDK_OFFSET(0x13FBDD00)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13FBDD60)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13FBDDF0)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x13FBDE00)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13FBDE10)
#define MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x13FBDE20)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainCityRevivalPageController_TypeDefinitionIndex = 65228;

	class UIMainCityRevivalPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		// static const ::System::String* LevelUpAnimation; // 0x0
		// static const ::System::Single MaterialProgressDuration; // 0x0
		// static const ::System::String* LevelUpSoundKey; // 0x0
		// static const ::System::String* ProgressValueFormat; // 0x0
		::Class_2_79AE422BA06F6D26_206* _view; // 0x320
		::System::Collections::Generic::List_1<::Class_1_C4CB11A2FD957208_Struct_2_98E057419FFAAB00>* _availableItems; // 0x328
		::System::Int32 _landID; // 0x330
		::Class_3_CAE257BB30FFAD12* _progress; // 0x338
		::System::Int32 _prvLv; // 0x340
		::System::Int32 _curLv; // 0x344
		::System::Int32 _materialItemID; // 0x348
		::System::Int32 _prvSubmittedCount; // 0x34C
		::System::Int32 _prvTargetCount; // 0x350
		::System::Int32 _curSubmittedCount; // 0x354
		::System::Int32 _curTargetCount; // 0x358
		::Class_1_0D6706375CDAAE8C* _material; // 0x360
		::Class_3_D0B68EB9E337E202_1* _rewardedItems; // 0x368
		::System::Single _progressOffset; // 0x370
		::System::Single _maxProgressValue; // 0x374
		::MoleMole::UIItemIconBtnWidgetController* _materialIconWidget; // 0x378
		::System::Boolean _isShowingGetItemList; // 0x380

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

		::System::Void RefreshView(::Class_2_208CC9941471731A_340* landTemplate, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_340*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, landTemplate, init);
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

		::System::Void _SubmitLandItems_b__31_0(::Class_0_16E4307DCC419505_11* message)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINCITYREVIVALPAGECONTROLLER__SUBMITLANDITEMS_B__31_0_OFFSET))(this, message);
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
