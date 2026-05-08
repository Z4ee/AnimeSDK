#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79AE422BA06F6D26_11;
namespace MoleMole { class SummerEventResultRowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ADDROW_OFFSET UNITYSDK_OFFSET(0x14813B00)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x14813920)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14813910)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14813A00)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14813A90)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14813930)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_REGISTEREXIT_OFFSET UNITYSDK_OFFSET(0x14813CD0)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_SETTIME_OFFSET UNITYSDK_OFFSET(0x14813C20)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14813DC0)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14813DD0)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14813E60)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x14813E70)

namespace MoleMole
{
	inline static constexpr unsigned int UISuumerEventResultPopWindowController_TypeDefinitionIndex = 41175;

	class UISuumerEventResultPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_11* _view; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_79AE422BA06F6D26_11* get_View()
		{
			return ((::Class_2_79AE422BA06F6D26_11*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_GET_VIEW_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void AddRow(::System::Int32 index, ::MoleMole::SummerEventResultRowContext* rowContext)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::SummerEventResultRowContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ADDROW_OFFSET))(this, index, rowContext);
		}

		::System::Void SetTime(::System::Int32 seconds)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_SETTIME_OFFSET))(this, seconds);
		}

		::System::Void RegisterExit(::System::Action* exit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_REGISTEREXIT_OFFSET))(this, exit);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
