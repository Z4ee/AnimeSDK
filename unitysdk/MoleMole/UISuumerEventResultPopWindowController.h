#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_79AE422BA06F6D26_42;
namespace MoleMole { class SummerEventResultRowContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ADDROW_OFFSET UNITYSDK_OFFSET(0x13829600)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_GET_VIEW_OFFSET UNITYSDK_OFFSET(0x13829420)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x13829410)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x13829500)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13829590)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13829430)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_REGISTEREXIT_OFFSET UNITYSDK_OFFSET(0x138297D0)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_SETTIME_OFFSET UNITYSDK_OFFSET(0x13829720)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x138298C0)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x138298D0)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x13829960)
#define MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x13829970)

namespace MoleMole
{
	inline static constexpr unsigned int UISuumerEventResultPopWindowController_TypeDefinitionIndex = 42621;

	class UISuumerEventResultPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_42* _view; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_79AE422BA06F6D26_42* get_View()
		{
			return ((::Class_2_79AE422BA06F6D26_42*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUUMEREVENTRESULTPOPWINDOWCONTROLLER_GET_VIEW_OFFSET))(this);
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
