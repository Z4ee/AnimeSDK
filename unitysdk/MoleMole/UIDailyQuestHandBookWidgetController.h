#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_0_16E4307DCC419505_688;
class Class_1_0D6706375CDAAE8C;
class Class_2_D3704D04572A8616;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_CANTAKEVITALITYREWARD_OFFSET UNITYSDK_OFFSET(0x15662AD0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_CREATEDOUBLEWEEKBINGOROW_OFFSET UNITYSDK_OFFSET(0x15661850)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_CREATENORMALROW_OFFSET UNITYSDK_OFFSET(0x156616F0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_CREATESCHEDULEPLANROW_OFFSET UNITYSDK_OFFSET(0x156617A0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_GETTEMPLATEINDEX_OFFSET UNITYSDK_OFFSET(0x156614D0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x156603C0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x156613C0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15660860)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15661450)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15660200)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15660580)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_OPENREWARDSPREVIEW_OFFSET UNITYSDK_OFFSET(0x15663750)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET UNITYSDK_OFFSET(0x15663410)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_PLAYPROGRESSPOINTCANTAKEEFFECT_OFFSET UNITYSDK_OFFSET(0x15662E10)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_PLAYPROGRESSPOINTDONEEFFECT_OFFSET UNITYSDK_OFFSET(0x15662FA0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_REFRESHPROGRESSVIEW_OFFSET UNITYSDK_OFFSET(0x15661900)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_REFRESHREWARDSTATE_OFFSET UNITYSDK_OFFSET(0x15662010)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x156608F0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x156622C0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_SHOWGETITEMLIST_OFFSET UNITYSDK_OFFSET(0x156631E0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_TRYPLAYCANTAKEREWARDEFFECT_OFFSET UNITYSDK_OFFSET(0x15660600)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_TRYTAKEVITALITYREWARDS_OFFSET UNITYSDK_OFFSET(0x15662830)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x156638A0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET UNITYSDK_OFFSET(0x15663900)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET UNITYSDK_OFFSET(0x15663930)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER__ONUIINIT_B__1_2_OFFSET UNITYSDK_OFFSET(0x15663950)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15663980)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x15663A10)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15663AB0)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15663B40)
#define MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15663BD0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDailyQuestHandBookWidgetController_TypeDefinitionIndex = 69667;

	class UIDailyQuestHandBookWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D3704D04572A8616* _view; // 0x2B8
		::System::Collections::Generic::List_1<::Class_0_16E4307DCC419505_688*>* _dailyQuests; // 0x2C0
		::System::Boolean _isTakingRewards; // 0x2C8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Int32 GetTemplateIndex(::System::Int32 dataIndex)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_GETTEMPLATEINDEX_OFFSET))(this, dataIndex);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateNormalRow(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_CREATENORMALROW_OFFSET))(this, controlReference);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateSchedulePlanRow(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_CREATESCHEDULEPLANROW_OFFSET))(this, controlReference);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateDoubleWeekBingoRow(::System::Func_1<::MoleMole::UIControlReference*>* controlReference)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_CREATEDOUBLEWEEKBINGOROW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshView(::System::Boolean initData)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, initData);
		}

		::System::Void RefreshProgressView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_REFRESHPROGRESSVIEW_OFFSET))(this);
		}

		::System::Boolean TryTakeVitalityRewards()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_TRYTAKEVITALITYREWARDS_OFFSET))(this);
		}

		::System::Void TryPlayCanTakeRewardEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_TRYPLAYCANTAKEREWARDEFFECT_OFFSET))(this);
		}

		::System::Void PlayProgressPointCanTakeEffect(::System::Int32 level, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_PLAYPROGRESSPOINTCANTAKEEFFECT_OFFSET))(this, level, onFinish);
		}

		::System::Void PlayProgressPointDoneEffect(::System::Int32 level, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_PLAYPROGRESSPOINTDONEEFFECT_OFFSET))(this, level, onFinish);
		}

		::System::Void ShowGetItemList(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* items, ::System::Action* animCb)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_SHOWGETITEMLIST_OFFSET))(this, items, animCb);
		}

		::System::Void PlayProgressAnim(::System::Single prvProgress, ::System::Single curProgress, ::System::Single duration, ::System::Action* onFinish)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single, ::System::Single, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_PLAYPROGRESSANIM_OFFSET))(this, prvProgress, curProgress, duration, onFinish);
		}

		::System::Void SetProgress(::System::Single progressValue)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this, progressValue);
		}

		::System::Void OpenRewardsPreview()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_OPENREWARDSPREVIEW_OFFSET))(this);
		}

		::System::Boolean CanTakeVitalityReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_CANTAKEVITALITYREWARD_OFFSET))(this);
		}

		::System::Void RefreshRewardState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER_REFRESHREWARDSTATE_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER__ONUIINIT_B__1_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__1_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER__ONUIINIT_B__1_1_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__1_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER__ONUIINIT_B__1_2_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDAILYQUESTHANDBOOKWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
