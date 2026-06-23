#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_WaveGroupStartCondition.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_WAVEGROUPPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x170C56A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_WaveGroupParam_TypeDefinitionIndex = 70554;

	class LevelShootGameConfig_WaveGroupParam : public ::System::Object
	{
	public:
		::System::Int32 MonsterWaveGroupID; // 0x10
		::MoleMole::Config::LevelShootGameConfig_WaveGroupStartCondition StartCondition; // 0x14
		::System::Single WaitTime; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_WAVEGROUPPARAM__CTOR_OFFSET))(this);
		}
	};
}
