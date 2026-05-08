#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_92EDBC2AD8437DA6.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_46;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISnakeGame3DModelController; }
namespace MoleMole::MiniGame { class SnakeMiniGameWorld; }

#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x14DB9190)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14DB9180)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14DB93F0)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14DB9590)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONLOGICINIT_OFFSET UNITYSDK_OFFSET(0x14DB91A0)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14DB9520)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14DB9480)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_REFRESHAUDIO_OFFSET UNITYSDK_OFFSET(0x14DB9200)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14DB9820)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14DB9830)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14DB98C0)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14DB98F0)
#define MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14DB9900)

namespace MoleMole
{
	inline static constexpr unsigned int UISnakeGamePageController_TypeDefinitionIndex = 46147;

	class UISnakeGamePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_46* _view; // 0x310
		::MoleMole::UISnakeGame3DModelController* snakeGame3dCtrl; // 0x318
		::MoleMole::MiniGame::SnakeMiniGameWorld* miniGameWorld; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_92EDBC2AD8437DA6 get_UICursorHideState()
		{
			return ((::Enum_3_92EDBC2AD8437DA6(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Void OnLogicInit(::MoleMole::MiniGame::SnakeMiniGameWorld* miniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::SnakeMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONLOGICINIT_OFFSET))(this, miniGameWorld);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void RefreshAudio()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_REFRESHAUDIO_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISNAKEGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
