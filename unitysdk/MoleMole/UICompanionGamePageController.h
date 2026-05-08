#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_92EDBC2AD8437DA6.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_16;
namespace MoleMole { class UIControlReference; }
namespace MoleMole::MiniGame { class CompanionMiniGameWorld; }

#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x14ECA6A0)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x14ECA690)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14ECA6B0)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONINITMINIWORLD_OFFSET UNITYSDK_OFFSET(0x14ECA800)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14ECA850)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14ECA790)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14ECA740)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x14ECAA10)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x14ECAA20)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x14ECAAB0)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x14ECAAE0)
#define MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x14ECAAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UICompanionGamePageController_TypeDefinitionIndex = 41437;

	class UICompanionGamePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_16* _view; // 0x310
		::MoleMole::MiniGame::CompanionMiniGameWorld* miniWorld; // 0x318

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_92EDBC2AD8437DA6 get_UICursorHideState()
		{
			return ((::Enum_3_92EDBC2AD8437DA6(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UICOMPANIONGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
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
