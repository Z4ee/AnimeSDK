#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_94C9713A8E4B253E;
namespace MoleMole { class SummerEventPauseContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_CONTINUEGAME_OFFSET UNITYSDK_OFFSET(0x17D5FF00)
#define MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x17D5FCD0)
#define MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D5FF70)
#define MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17D60070)
#define MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D60000)
#define MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D5FCE0)
#define MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x17D60150)
#define MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x17D60160)
#define MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x17D601F0)
#define MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x17D60220)
#define MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x17D60230)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventPausePopWindowController_TypeDefinitionIndex = 61350;

	class UISummerEventPausePopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_94C9713A8E4B253E* _view; // 0x318
		::MoleMole::SummerEventPauseContext* _context; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void ContinueGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_CONTINUEGAME_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTPAUSEPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
