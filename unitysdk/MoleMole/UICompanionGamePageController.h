#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_0277FE49450CA4D5.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_101;
namespace MoleMole { class UIControlReference; }
namespace MoleMole::MiniGame { class CompanionMiniGameWorld; }

#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x175C3970)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x175C3960)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175C3980)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONINITMINIWORLD_OFFSET UNITYSDK_OFFSET(0x175C3AD0)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x175C3B20)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175C3A60)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175C3A10)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x175C3CE0)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x175C3CF0)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x175C3D80)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x175C3DB0)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x175C3DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UICompanionGamePageController_TypeDefinitionIndex = 57717;

	class UICompanionGamePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_101* _view; // 0x318
		::MoleMole::MiniGame::CompanionMiniGameWorld* miniWorld; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_0277FE49450CA4D5 get_UICursorHideState()
		{
			return ((::Enum_3_0277FE49450CA4D5(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnInitMiniWorld(::MoleMole::MiniGame::CompanionMiniGameWorld* companionMiniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::CompanionMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONINITMINIWORLD_OFFSET))(this, companionMiniGameWorld);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
