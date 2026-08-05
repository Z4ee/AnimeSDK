#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_DBF2701137F18AA6.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class Class_2_15F9FE7F9AD3257D;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x19DBE990)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x19DBE9A0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19DBEEE0)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowJourneyConfig_TypeDefinitionIndex = 83991;

	class MainCityChatShowJourneyConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 startNodeID; // 0x10
		::System::Int32 endNodeID; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_DBF2701137F18AA6 get_UICtrl()
		{
			return ((::Enum_3_DBF2701137F18AA6(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::Class_2_15F9FE7F9AD3257D* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_15F9FE7F9AD3257D*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWJOURNEYCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}
	};
}
