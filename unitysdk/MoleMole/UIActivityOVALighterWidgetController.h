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

#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_CLEARCOMPONTNBTNS_OFFSET UNITYSDK_OFFSET(0x18E17860)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_CREATEBASEACTIVITYINFO_OFFSET UNITYSDK_OFFSET(0x18E16E10)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_CREATEBTNSTYLE_OFFSET UNITYSDK_OFFSET(0x18E16890)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_INVOKEENTRYBTN_OFFSET UNITYSDK_OFFSET(0x18E17C00)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONCLICKGENERALACTIVITYTAG_OFFSET UNITYSDK_OFFSET(0x18E17280)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONCLICKREWARD_OFFSET UNITYSDK_OFFSET(0x18E178A0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E17150)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18E16420)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E174F0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E162F0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E163B0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER_ONUPDATEUI_OFFSET UNITYSDK_OFFSET(0x18E170E0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER__CREATEBASEACTIVITYINFO_B__10_0_OFFSET UNITYSDK_OFFSET(0x18E17EB0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x18E17DD0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x18E17F60)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x18E17FF0)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x18E18090)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x18E18120)
#define MOLEMOLE_UIACTIVITYOVALIGHTERWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x18E181B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityOVALighterWidgetController_TypeDefinitionIndex = 84850;

	class UIActivityOVALighterWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		// static const ::System::Int32 ActionTypeClickReward = 0x29; // 0x0
		::Class_2_447546814EA5BBED* _view; // 0x2C0
		::MoleMole::ActivityAvatarWdigetContext* contex; // 0x2C8
		::System::Collections::Generic::List_1<::MoleMole::UIActivityOVALighterEntryBtnWidgetController*>* btns; // 0x2D0
		::MoleMole::UIActivityCompWeekRewardBtnWidgetController* _compRewardBtn; // 0x2D8

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
