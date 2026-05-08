#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::MusicGame { class LiveHouseLevelConfig; }

#define MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSELEVEL__CTOR_OFFSET UNITYSDK_OFFSET(0xF9789C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigActivityLiveHouseLevel_TypeDefinitionIndex = 79415;

	class ConfigActivityLiveHouseLevel : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::MusicGame::LiveHouseLevelConfig* LevelConfig; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGACTIVITYLIVEHOUSELEVEL__CTOR_OFFSET))(this);
		}
	};
}
