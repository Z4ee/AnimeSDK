#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_208CC9941471731A_621;
class Class_2_208CC9941471731A_818;
class Class_2_79AE422BA06F6D26_64;
namespace MoleMole { class UIActivityCompTaskOvaContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONACTIVITYCHANGED_OFFSET UNITYSDK_OFFSET(0x12BF6300)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BF5E30)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0x12BF6350)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONOPENTASKOVA_OFFSET UNITYSDK_OFFSET(0x12BF5950)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12BF5EC0)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BF60F0)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12BF57D0)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12BF5830)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_REFRESHPERIODPROGRESS_OFFSET UNITYSDK_OFFSET(0x12BF5F50)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_SETNEXTUNLOCKPERIOD_OFFSET UNITYSDK_OFFSET(0x12BF63A0)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x12BF65C0)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x12BF6620)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x12BF66B0)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x12BF6750)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x12BF67E0)
#define MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x12BF6870)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityCompTaskOvaWidgetController_TypeDefinitionIndex = 60117;

	class UIActivityCompTaskOvaWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_64* _view; // 0x2C0
		::MoleMole::UIActivityCompTaskOvaContext* compContext; // 0x2C8
		::Class_2_208CC9941471731A_818* activityRuleTemplate; // 0x2D0
		::System::Collections::Generic::List_1<::System::Int32>* integratedList; // 0x2D8
		::System::Int32 itemID; // 0x2E0
		::Class_1_D375C91CCE5D3999* relateActivityData; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnOpenTaskOva()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONOPENTASKOVA_OFFSET))(this);
		}

		::System::Void OnActivityChanged(::Class_1_D375C91CCE5D3999* activityBaseData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONACTIVITYCHANGED_OFFSET))(this, activityBaseData);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshPeriodProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_REFRESHPERIODPROGRESS_OFFSET))(this);
		}

		::System::Void SetNextUnlockPeriod(::Class_2_208CC9941471731A_621* showTemplate)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_208CC9941471731A_621*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER_SETNEXTUNLOCKPERIOD_OFFSET))(this, showTemplate);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYCOMPTASKOVAWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
