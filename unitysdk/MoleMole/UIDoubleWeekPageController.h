#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_126;
class Class_2_80EC5A94E858E47B;
class Class_3_31FA216B8128BBFD_8;
class MonoUIDoubleWeekConfig;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_BINDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x170B9860)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_DOREFRESHBINGOFORSINGLEGRID_OFFSET UNITYSDK_OFFSET(0x170BB900)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0x170B9850)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x170B8400)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x170B85D0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x170B8410)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x170BA1E0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONSELECTGRID_OFFSET UNITYSDK_OFFSET(0x170BA360)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170B92E0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONTAKEGRIDREWARDS_OFFSET UNITYSDK_OFFSET(0x170BC000)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONTAKESCOREREWARDS_OFFSET UNITYSDK_OFFSET(0x170BBFB0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170B8D80)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x170B8580)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x170B91E0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_OPENINFO_OFFSET UNITYSDK_OFFSET(0x170BB100)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHBINGOFORGRID_OFFSET UNITYSDK_OFFSET(0x170BB300)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHBINGOTARGET_OFFSET UNITYSDK_OFFSET(0x170BA230)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHCURRENCY_OFFSET UNITYSDK_OFFSET(0x170B9ED0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHGRIDS_OFFSET UNITYSDK_OFFSET(0x170B9A10)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHSCORE_OFFSET UNITYSDK_OFFSET(0x170B9990)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x170B9340)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x170B9250)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_TAKEALLGRIDREWARDS_OFFSET UNITYSDK_OFFSET(0x170BBD70)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_TRYTAKESPECIALREWARDS_OFFSET UNITYSDK_OFFSET(0x170B8E00)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x170BC060)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER__INITVIEW_B__11_1_OFFSET UNITYSDK_OFFSET(0x170BC070)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER__INITVIEW_B__11_2_OFFSET UNITYSDK_OFFSET(0x170BC0D0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER__INITVIEW_B__11_3_OFFSET UNITYSDK_OFFSET(0x170BC120)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER__INITVIEW_B__11_4_OFFSET UNITYSDK_OFFSET(0x170BC190)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x170BC1A0)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x170BC230)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x170BC240)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x170BC250)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x170BC260)
#define MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x170BC2F0)

namespace MoleMole
{
	inline static constexpr unsigned int UIDoubleWeekPageController_TypeDefinitionIndex = 65951;

	class UIDoubleWeekPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_126* _view; // 0x318
		::Class_2_80EC5A94E858E47B* _integralRewardHandler; // 0x320
		::System::Collections::Generic::List_1<::Class_3_31FA216B8128BBFD_8*>* _grids; // 0x328
		::MonoUIDoubleWeekConfig* _config; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void BindNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_BINDNOTIFICATION_OFFSET))(this);
		}

		::System::Void RefreshView(::System::Boolean init, ::System::Boolean playProgressAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, init, playProgressAnim);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Boolean RefreshCurrency()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHCURRENCY_OFFSET))(this);
		}

		::System::Void RefreshScore(::System::Boolean playProgressAnim, ::System::Boolean scrollToTarget)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHSCORE_OFFSET))(this, playProgressAnim, scrollToTarget);
		}

		::System::Void RefreshBingoTarget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHBINGOTARGET_OFFSET))(this);
		}

		::System::Void RefreshGrids(::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHGRIDS_OFFSET))(this, init);
		}

		::System::Void OnSelectGrid(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONSELECTGRID_OFFSET))(this, idx);
		}

		::System::Void OpenInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_OPENINFO_OFFSET))(this);
		}

		::System::Void RefreshBingoForGrid(::System::Int32 row, ::System::Int32 col)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_REFRESHBINGOFORGRID_OFFSET))(this, row, col);
		}

		::System::Void DoRefreshBingoForSingleGrid(::System::Int32 row, ::System::Int32 col, ::System::Int32 bingoIdx, ::System::Single delayTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_DOREFRESHBINGOFORSINGLEGRID_OFFSET))(this, row, col, bingoIdx, delayTime);
		}

		::System::Void TakeAllGridRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_TAKEALLGRIDREWARDS_OFFSET))(this);
		}

		::System::Void OnTakeScoreRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONTAKESCOREREWARDS_OFFSET))(this);
		}

		::System::Void OnTakeGridRewards(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_ONTAKEGRIDREWARDS_OFFSET))(this, args);
		}

		::System::Void TryTakeSpecialRewards()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER_TRYTAKESPECIALREWARDS_OFFSET))(this);
		}

		::System::Void _InitView_b__11_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER__INITVIEW_B__11_1_OFFSET))(this);
		}

		::System::Void _InitView_b__11_2(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER__INITVIEW_B__11_2_OFFSET))(this, args);
		}

		::System::Void _InitView_b__11_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER__INITVIEW_B__11_3_OFFSET))(this, args);
		}

		::System::Void _InitView_b__11_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER__INITVIEW_B__11_4_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDOUBLEWEEKPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
