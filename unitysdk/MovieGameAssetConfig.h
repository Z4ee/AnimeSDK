#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/ScriptableObject.h"

namespace RPG::Client::LittleGame { class MovieBossConfig; }
namespace RPG::Client::LittleGame { class MovieGameLevelConfig; }

#define MOVIEGAMEASSETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x933B460)

inline static constexpr unsigned int MovieGameAssetConfig_TypeDefinitionIndex = 43944;

class MovieGameAssetConfig : public ::UnityEngine::ScriptableObject
{
public:
	::RPG::Client::LittleGame::MovieGameLevelConfig* LevelConfig; // 0x18
	::RPG::Client::LittleGame::MovieBossConfig* BossConfig; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOVIEGAMEASSETCONFIG__CTOR_OFFSET))(this);
	}
};
