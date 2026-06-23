#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_7A4252233BCEB3A9.h"
#include "unitysdk/MoleMole/GalGame/MainCityChatShowUIConfig.h"

class Class_2_15F9FE7F9AD3257D;
namespace MoleMole::GalGame { class MainCityChatShowUIConfig_OnCloseWithIndex; }

#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_GET_UICTRL_OFFSET UNITYSDK_OFFSET(0x1912B3D0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_ONOPEN_OFFSET UNITYSDK_OFFSET(0x1912B3E0)
#define MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1912B680)

namespace MoleMole::GalGame
{
	inline static constexpr unsigned int MainCityChatShowRankListConfig_TypeDefinitionIndex = 69270;

	class MainCityChatShowRankListConfig : public ::MoleMole::GalGame::MainCityChatShowUIConfig
	{
	public:
		::System::Int32 ConfigId; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG__CTOR_OFFSET))(this);
		}

		::Enum_3_7A4252233BCEB3A9 get_UICtrl()
		{
			return ((::Enum_3_7A4252233BCEB3A9(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_GET_UICTRL_OFFSET))(this);
		}

		::System::Void OnOpen(::Class_2_15F9FE7F9AD3257D* node, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex* onClose)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_15F9FE7F9AD3257D*, ::MoleMole::GalGame::MainCityChatShowUIConfig_OnCloseWithIndex*))((::PBYTE)hIl2Cpp + MOLEMOLE_GALGAME_MAINCITYCHATSHOWRANKLISTCONFIG_ONOPEN_OFFSET))(this, node, onClose);
		}
	};
}
