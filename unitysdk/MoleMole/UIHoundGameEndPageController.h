#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_111;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UISoulHoundsIIIEndingChildWindowController; }
namespace MoleMole::MiniGame { class HoundMiniGameWorld; }

#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x16F94A30)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F94A40)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONLOGICINIT_OFFSET UNITYSDK_OFFSET(0x16F94B40)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F94AD0)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x16F94CC0)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x16F94CD0)
#define MOLEMOLE_UIHOUNDGAMEENDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x16F94D60)

namespace MoleMole
{
	inline static constexpr unsigned int UIHoundGameEndPageController_TypeDefinitionIndex = 79098;

	class UIHoundGameEndPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_111* _view; // 0x318
		::MoleMole::MiniGame::HoundMiniGameWorld* gameWorld; // 0x320
		::MoleMole::UISoulHoundsIIIEndingChildWindowController* endingCtrl; // 0x328

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
