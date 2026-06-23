#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_162;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISnakeDuelOnlineEndingChildWindowController; }
namespace MoleMole::Arcade::SnakeDemo { class UISnakeDuelEndingChildWindowController; }

#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x1E006140)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1E006530)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1E006150)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1E0065C0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x1E006630)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x1E006640)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x1E0066D0)
#define MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x1E0066E0)

namespace MoleMole::Arcade::SnakeDemo
{
	inline static constexpr unsigned int UISnakeGameEndPageController_TypeDefinitionIndex = 91010;

	class UISnakeGameEndPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_162* _view; // 0x318
		::MoleMole::Arcade::SnakeDemo::UISnakeDuelEndingChildWindowController* _endingCtrl; // 0x320
		::MoleMole::UISnakeDuelOnlineEndingChildWindowController* _endingOnlineCtrl; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showContextBase)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONSHOW_OFFSET))(this, showContextBase);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_ARCADE_SNAKEDEMO_UISNAKEGAMEENDPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}
	};
}
