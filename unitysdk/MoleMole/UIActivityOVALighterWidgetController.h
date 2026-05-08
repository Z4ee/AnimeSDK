#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_447546814EA5BBED;
namespace MoleMole { class ActivityAvatarWdigetContext; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIActivityOVALighterEntryBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_CLEARCOMPONTNBTNS_OFFSET UNITYSDK_OFFSET(0x167E4500)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_CREATEBASEACTIVITYINFO_OFFSET UNITYSDK_OFFSET(0x167E3B60)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_CREATEBTNSTYLE_OFFSET UNITYSDK_OFFSET(0x167E3690)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_INVOKEENTRYBTN_OFFSET UNITYSDK_OFFSET(0x167E48A0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONCLICKGENERALACTIVITYTAG_OFFSET UNITYSDK_OFFSET(0x167E3F80)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONCLICKREWARD_OFFSET UNITYSDK_OFFSET(0x167E4540)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167E3E50)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x167E3220)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167E4190)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167E30F0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167E31B0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUPDATEUI_OFFSET UNITYSDK_OFFSET(0x167E3DE0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER__CREATEBASEACTIVITYINFO_B__10_0_OFFSET UNITYSDK_OFFSET(0x167E4B50)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x167E4A70)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x167E4C00)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x167E4C90)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x167E4D30)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x167E4DC0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x167E4E50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOVALighterWidgetController_TypeDefinitionIndex = 64238;

	class UIActivityOVALighterWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 ActionTypeClickReward = 0x29; // 0x0
		::Class_2_447546814EA5BBED* _view; // 0x2B8
		::MoleMole::ActivityAvatarWdigetContext* contex; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIActivityOVALighterEntryBtnWidgetController*>* btns; // 0x2C8
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _compRewardBtn; // 0x2D0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUpdateUI(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUPDATEUI_OFFSET))(this, args);
		}

		::System::Void CreateBtnStyle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_CREATEBTNSTYLE_OFFSET))(this);
		}

		::System::Void CreateBaseActivityInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_CREATEBASEACTIVITYINFO_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnClickGeneralActivityTag()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONCLICKGENERALACTIVITYTAG_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnClickReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONCLICKREWARD_OFFSET))(this);
		}

		::System::Void ClearCompontnBtns()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_CLEARCOMPONTNBTNS_OFFSET))(this);
		}

		::System::Void InvokeEntryBtn(::System::Int32 entryID, ::System::Int32 focusQuest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_INVOKEENTRYBTN_OFFSET))(this, entryID, focusQuest);
		}

		::System::Void _CreateBaseActivityInfo_b__10_0(::UnityEngine::UI::Extension::UITimeWidget* _)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER__CREATEBASEACTIVITYINFO_B__10_0_OFFSET))(this, _);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
