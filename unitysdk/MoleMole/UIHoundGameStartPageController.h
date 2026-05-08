#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_79;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISoulHoundsIIIStartChildWindowController; }
namespace MoleMole::MiniGame { class HoundMiniGameWorld; }

#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15FB40B0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15FB40C0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONLOGICINIT_OFFSET UNITYSDK_OFFSET(0x15FB4210)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15FB41A0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15FB4150)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB43C0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15FB43D0)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15FB4460)
#define MOLEMOLE_UIHOUNDGAMESTARTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x15FB4470)

namespace MoleMole
{
	inline static constexpr unsigned int UIHoundGameStartPageController_TypeDefinitionIndex = 51519;

	class UIHoundGameStartPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_79* _view; // 0x310
		::MoleMole::UISoulHoundsIIIStartChildWindowController* startCtrl; // 0x318
		::MoleMole::MiniGame::HoundMiniGameWorld* gameWorld; // 0x320

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
