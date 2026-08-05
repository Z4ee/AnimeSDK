#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0277FE49450CA4D5.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_135;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole::MiniGame { class BallRaceMiniGameWorld; }

#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x19781060)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x19780FC0)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x19780FD0)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONINITMINIWORLD_OFFSET UNITYSDK_OFFSET(0x19781370)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x197811A0)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19781130)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19781070)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197810C0)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x197813C0)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x197813D0)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x19781460)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19781490)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x197814A0)
#define MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x197814B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBallRaceGamePageController_TypeDefinitionIndex = 69008;

	class UIBallRaceGamePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_135* _view; // 0x318
		::MoleMole::MiniGame::BallRaceMiniGameWorld* miniWorld; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::Enum_3_0277FE49450CA4D5 get_UICursorHideState()
		{
			return ((::Enum_3_0277FE49450CA4D5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnInitMiniWorld(::MoleMole::MiniGame::BallRaceMiniGameWorld* ballRaceMiniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::BallRaceMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER_ONINITMINIWORLD_OFFSET))(this, ballRaceMiniGameWorld);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBALLRACEGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
