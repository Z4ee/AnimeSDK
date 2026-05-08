#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_C95CBAD1D6CF9839_Struct_2_61D86EABF2BCB6AD.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_2_39E2D7E8A370D068;
class Class_2_5D2C953898D63E26;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::Events { class UnityAction; }

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_BINDVIEWCALLBACK_OFFSET UNITYSDK_OFFSET(0x14C198B0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_HIDETIP_OFFSET UNITYSDK_OFFSET(0x14C1A720)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_INITTIP_OFFSET UNITYSDK_OFFSET(0x14C19B10)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C195A0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONNODECHANGE_OFFSET UNITYSDK_OFFSET(0x14C19D60)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C19630)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C19390)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C19530)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUNLOCK_OFFSET UNITYSDK_OFFSET(0x14C1A320)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_REFRESHLOCKBTN_OFFSET UNITYSDK_OFFSET(0x14C19930)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_REFRESHNOTIFICATIONSHOWTYPE_OFFSET UNITYSDK_OFFSET(0x14C19E20)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETICON_OFFSET UNITYSDK_OFFSET(0x14C1A460)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETPROGRESS_OFFSET UNITYSDK_OFFSET(0x14C1A390)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETTITLE_OFFSET UNITYSDK_OFFSET(0x14C1A4D0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWNODE_OFFSET UNITYSDK_OFFSET(0x14C1A000)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTIP_OFFSET UNITYSDK_OFFSET(0x14C1A670)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTRACK_1_OFFSET UNITYSDK_OFFSET(0x14C1A5B0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTRACK_OFFSET UNITYSDK_OFFSET(0x14C1A540)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14C1A7A0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14C1A9D0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14C1AA60)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14C1AAF0)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14C1AB80)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageRowWidgetController_TypeDefinitionIndex = 82694;

	class UISuibianTempleManageRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_5D2C953898D63E26* _view; // 0x2B8
		::Share::ENotificationBadgeType badgeType; // 0x2C0
		::System::Boolean init; // 0x2C4
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::String*>>* productTypes; // 0x2C8
		::System::Collections::Generic::List_1<::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::String*>>* saleTypes; // 0x2D0
		::System::Int32 lockid; // 0x2D8
		::Class_2_39E2D7E8A370D068* lockModel; // 0x2E0
		::UnityEngine::Events::UnityAction* callback; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void BindViewCallback(::System::Int32 lockid, ::UnityEngine::Events::UnityAction* callback, ::Share::ENotificationBadgeType badgeType)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::UnityEngine::Events::UnityAction*, ::Share::ENotificationBadgeType))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_BINDVIEWCALLBACK_OFFSET))(this, lockid, callback, badgeType);
		}

		::System::Void InitTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_INITTIP_OFFSET))(this);
		}

		::System::Void OnNodeChange(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONNODECHANGE_OFFSET))(this, value);
		}

		::System::Void RefreshNotificationShowType()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_REFRESHNOTIFICATIONSHOWTYPE_OFFSET))(this);
		}

		::System::Void ShowNode(::System::Collections::Generic::List_1<::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::String*>>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::ValueTuple_2<::Share::ENotificationBadgeType, ::System::String*>>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWNODE_OFFSET))(this, list);
		}

		::System::Void OnUnlock(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_ONUNLOCK_OFFSET))(this, args);
		}

		::System::Void RefreshLockBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_REFRESHLOCKBTN_OFFSET))(this);
		}

		::System::Void SetProgress(::System::Int32 currentCount, ::System::Int32 totalCount)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETPROGRESS_OFFSET))(this, currentCount, totalCount);
		}

		::System::Void SetIcon(::System::String* icon)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETICON_OFFSET))(this, icon);
		}

		::System::Void SetTitle(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SETTITLE_OFFSET))(this, key);
		}

		::System::Void ShowTrack(::System::Boolean track)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTRACK_OFFSET))(this, track);
		}

		::System::Void ShowTrack_1(::Class_2_C95CBAD1D6CF9839_Struct_2_61D86EABF2BCB6AD track)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C95CBAD1D6CF9839_Struct_2_61D86EABF2BCB6AD))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTRACK_1_OFFSET))(this, track);
		}

		::System::Void ShowTip(::System::String* message)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_SHOWTIP_OFFSET))(this, message);
		}

		::System::Void HideTip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER_HIDETIP_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
