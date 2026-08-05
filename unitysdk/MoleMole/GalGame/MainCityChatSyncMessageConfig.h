#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatSyncServerDataConfig.h"

namespace System { class Action; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x129A5DB0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_STARTSYNC_OFFSET UNITYSDK_OFFSET(0x129A5DC0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x129A6140)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatSyncMessageConfig_TypeDefinitionIndex = 43008;

	class MainCityChatSyncMessageConfig : public ::MoleMole::GalGame::MainCityChatSyncServerDataConfig
	{
	public:
		::System::Int32 MessageGroupId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_DBF2701137F18AA6 get_UICtrl()
		{
			return ((::Enum_3_DBF2701137F18AA6(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void StartSync(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSYNCMESSAGECONFIG_STARTSYNC_OFFSET))(this, callback);
		}
	};
}
