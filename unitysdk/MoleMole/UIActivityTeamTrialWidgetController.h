#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_DEED5AAD1F9518EE;
namespace MoleMole { class UIActivityTeamTrialListRowWidgetController_Data; }
namespace MoleMole { class UIActivityTeamTrialWidgetController_Context; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x15E4C020)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E4B800)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_ONFADEINFINISH_OFFSET UNITYSDK_OFFSET(0x15E4C100)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_ONSELECTQUEST_OFFSET UNITYSDK_OFFSET(0x15E4C830)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E4B980)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E4BA00)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_REFRESHWIDGET_OFFSET UNITYSDK_OFFSET(0x15E4BAF0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_TRYPLAYUNLOCKANIM_OFFSET UNITYSDK_OFFSET(0x15E4C380)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_UNLOCKANIMFINISH_OFFSET UNITYSDK_OFFSET(0x15E4C7E0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15E4CB00)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15E4CC20)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15E4CCB0)
#define MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x15E4CD40)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityTeamTrialWidgetController_TypeDefinitionIndex = 44294;

	class UIActivityTeamTrialWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_DEED5AAD1F9518EE* _view; // 0x2C0
		::MoleMole::UIActivityTeamTrialWidgetController_Context* _context; // 0x2C8
		::System::Int32 _activityID; // 0x2D0
		::System::Boolean _waitFadeInFinish; // 0x2D4
		::System::Collections::Generic::List_1<::MoleMole::UIActivityTeamTrialListRowWidgetController_Data*>* _questDataList; // 0x2D8
		::System::Int32 selectQuestID; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void RefreshWidget(::System::Int32 targetQuestID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_REFRESHWIDGET_OFFSET))(this, targetQuestID);
		}

		::System::Void OnFadeInFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_ONFADEINFINISH_OFFSET))(this);
		}

		::System::Void TryPlayUnlockAnim()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_TRYPLAYUNLOCKANIM_OFFSET))(this);
		}

		::System::Void UnlockAnimFinish()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_UNLOCKANIMFINISH_OFFSET))(this);
		}

		::System::Void OnSelectQuest(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER_ONSELECTQUEST_OFFSET))(this, index);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYTEAMTRIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
