#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_0_16E4307DCC419505_11;
class Class_2_1824EF69C8E376A3;
class Class_2_9EF3F803680CDCC7;
class Class_2_F69D29AB796376C2;
namespace MoleMole { class QuickEditContext; }
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_CHECKTEAMHASLOCK_OFFSET UNITYSDK_OFFSET(0x14867A50)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_CREATTEAMEDITROW_OFFSET UNITYSDK_OFFSET(0x14864000)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_GETAVATARISLOCKED_OFFSET UNITYSDK_OFFSET(0x14865870)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_GETBUDDYISLOCKED_OFFSET UNITYSDK_OFFSET(0x14865940)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_GETTEAMDATA_OFFSET UNITYSDK_OFFSET(0x14867310)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14863AF0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONBUDDYSELECT_OFFSET UNITYSDK_OFFSET(0x14865E60)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONBUDYEDITORCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x14864C30)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONCLOSECLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x14864180)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14865C30)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONGOBTNCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x14866FD0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONQUICKTEAMUPDATE_OFFSET UNITYSDK_OFFSET(0x14866F60)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONREWARDFOCUSCHANGE_OFFSET UNITYSDK_OFFSET(0x14865120)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONROLEEDITORCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x148644D0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONSELECTAVATAR_OFFSET UNITYSDK_OFFSET(0x14866600)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONSELECTBUDDYRSP_OFFSET UNITYSDK_OFFSET(0x14866410)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONTEAMCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x14865090)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONTEAMICONCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x14864460)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14867D30)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14863B00)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14865A10)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_SETMUTISELECT_OFFSET UNITYSDK_OFFSET(0x14865380)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14867DA0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER__ONCLOSECLICKHANDLE_B__16_0_OFFSET UNITYSDK_OFFSET(0x14867E90)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER__ONCLOSECLICKHANDLE_B__16_1_OFFSET UNITYSDK_OFFSET(0x14867EA0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14867F30)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14867FC0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14867FD0)
#define MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14867FE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIQuickEditPopWindowController_TypeDefinitionIndex = 74597;

	class UIQuickEditPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_9EF3F803680CDCC7* _view; // 0x310
		::MoleMole::QuickEditContext* _context; // 0x318
		::System::Collections::Generic::List_1<::System::Int32>* teamList; // 0x320
		::System::Int32 _curTeamSlot; // 0x328
		::System::Int32 _curEditorTeamSlot; // 0x32C
		::System::Action_2<::Il2CppArray<::System::Int32>*, ::Il2CppArray<::System::Int32>*>* OnSelectTeamAction; // 0x330
		::Il2CppArray<::System::Int32>* TwoTeamSelectData; // 0x338
		::System::Boolean isTwoTeam; // 0x340
		::System::Boolean _withOutBattle; // 0x341
		::System::Boolean IsBigScene; // 0x342
		::Class_2_F69D29AB796376C2* QuestCfg; // 0x348
		::System::Boolean _applyTeamWhenLock; // 0x350
		::System::Collections::Generic::List_1<::Class_2_1824EF69C8E376A3*>* _defaultAvatarList; // 0x358
		::System::Int32 _changeBuddyState; // 0x360
		::Il2CppArray<::System::Int32>* EmptyTeamData; // 0x368

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::MoleMole::ScrollViewItemWidgetController* CreatTeamEditRow(::System::Func_1<::MoleMole::UIControlReference*>* arg)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_CREATTEAMEDITROW_OFFSET))(this, arg);
		}

		::System::Void OnCloseClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONCLOSECLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnTeamIconClickHandle(::System::Int32 obj, ::System::Int32 teamSlot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONTEAMICONCLICKHANDLE_OFFSET))(this, obj, teamSlot);
		}

		::System::Void OnTeamClickHandle(::System::Int32 obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONTEAMCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnRewardFocusChange()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONREWARDFOCUSCHANGE_OFFSET))(this);
		}

		::System::Void SetMutiSelect(::System::Int32 teamSlot)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_SETMUTISELECT_OFFSET))(this, teamSlot);
		}

		::System::Boolean GetAvatarIsLocked(::System::Int32 avatarID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_GETAVATARISLOCKED_OFFSET))(this, avatarID);
		}

		::System::Boolean GetBuddyIsLocked(::System::Int32 buddyID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_GETBUDDYISLOCKED_OFFSET))(this, buddyID);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnRoleEditorClickHandle(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONROLEEDITORCLICKHANDLE_OFFSET))(this, index);
		}

		::System::Void OnBudyEditorClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONBUDYEDITORCLICKHANDLE_OFFSET))(this);
		}

		::System::Void OnBuddySelect(::System::EventArgs* arg)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONBUDDYSELECT_OFFSET))(this, arg);
		}

		::System::Void OnSelectBuddyRsp(::Class_0_16E4307DCC419505_11* rcvMessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_11*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONSELECTBUDDYRSP_OFFSET))(this, rcvMessage);
		}

		::System::Void OnSelectAvatar(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONSELECTAVATAR_OFFSET))(this, eventArgs);
		}

		::System::Void OnQuickTeamUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONQUICKTEAMUPDATE_OFFSET))(this, obj);
		}

		::System::Void OnGoBtnClickHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONGOBTNCLICKHANDLE_OFFSET))(this);
		}

		::Il2CppArray<::System::Int32>* GetTeamData(::System::Int32 _slot, ::System::Boolean deleteLock)
		{
			return ((::Il2CppArray<::System::Int32>*(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_GETTEAMDATA_OFFSET))(this, _slot, deleteLock);
		}

		::System::Boolean CheckTeamHasLock(::System::Int32 _slot, ::System::Boolean withTip)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_CHECKTEAMHASLOCK_OFFSET))(this, _slot, withTip);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnCloseClickHandle_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER__ONCLOSECLICKHANDLE_B__16_0_OFFSET))(this);
		}

		::System::Void _OnCloseClickHandle_b__16_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER__ONCLOSECLICKHANDLE_B__16_1_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIQUICKEDITPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
