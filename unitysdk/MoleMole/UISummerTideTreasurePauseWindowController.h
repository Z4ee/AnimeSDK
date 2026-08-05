#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_610CEADF7C44C275_1;
namespace MoleMole { class SummerTideTreasurePauseContext; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_CONTINUEGAME_OFFSET UNITYSDK_OFFSET(0x10EF1E00)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x10EF1C00)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EF1E70)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x10EF1F70)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EF1F00)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EF1C10)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x10EF2050)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x10EF2060)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x10EF20F0)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x10EF2120)
#define MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x10EF2130)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerTideTreasurePauseWindowController_TypeDefinitionIndex = 62232;

	class UISummerTideTreasurePauseWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_610CEADF7C44C275_1* _view; // 0x318
		::MoleMole::SummerTideTreasurePauseContext* _context; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void ContinueGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_CONTINUEGAME_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERTIDETREASUREPAUSEWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
