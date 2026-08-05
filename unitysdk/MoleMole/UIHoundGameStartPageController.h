#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_15;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISoulHoundsIIIStartChildWindowController; }
namespace MoleMole::MiniGame { class HoundMiniGameWorld; }

#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x196226B0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196226C0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONLOGICINIT_OFFSET UNITYSDK_OFFSET(0x19622810)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x196227A0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19622750)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x196229C0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x196229D0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x19622A60)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x19622A70)

namespace MoleMole
{
	inline static constexpr unsigned int UIHoundGameStartPageController_TypeDefinitionIndex = 41989;

	class UIHoundGameStartPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_15* _view; // 0x318
		::MoleMole::UISoulHoundsIIIStartChildWindowController* startCtrl; // 0x320
		::MoleMole::MiniGame::HoundMiniGameWorld* gameWorld; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLogicInit(::MoleMole::MiniGame::HoundMiniGameWorld* miniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::HoundMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONLOGICINIT_OFFSET))(this, miniGameWorld);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
