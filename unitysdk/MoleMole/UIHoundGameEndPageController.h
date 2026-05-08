#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_87;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISoulHoundsIIIEndingChildWindowController; }
namespace MoleMole::MiniGame { class HoundMiniGameWorld; }

#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x15FB3D70)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15FB3D80)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONLOGICINIT_OFFSET UNITYSDK_OFFSET(0x15FB3E80)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15FB3E10)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x15FB4000)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x15FB4010)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x15FB40A0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHoundGameEndPageController_TypeDefinitionIndex = 53995;

	class UIHoundGameEndPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_87* _view; // 0x310
		::MoleMole::MiniGame::HoundMiniGameWorld* gameWorld; // 0x318
		::MoleMole::UISoulHoundsIIIEndingChildWindowController* endingCtrl; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLogicInit(::MoleMole::MiniGame::HoundMiniGameWorld* miniGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::HoundMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONLOGICINIT_OFFSET))(this, miniGameWorld);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
