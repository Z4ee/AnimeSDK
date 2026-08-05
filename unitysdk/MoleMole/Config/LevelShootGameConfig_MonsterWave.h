#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/LevelShootGameConfig_WaveType.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelShootGameConfig_WaveGroupParam; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_MONSTERWAVE__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD70400)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_MonsterWave_TypeDefinitionIndex = 52692;

	class LevelShootGameConfig_MonsterWave : public ::System::Object
	{
	public:
		::System::Collections::Generic::List_1<::MoleMole::Config::LevelShootGameConfig_WaveGroupParam*>* GroupList; // 0x10
		::MoleMole::Config::LevelShootGameConfig_WaveType WaveType; // 0x18
		::System::Single LifeTime; // 0x1C
		::System::String* TriggerLevelEvent; // 0x20
		::System::Boolean KeepEntityWhenFinish; // 0x28
		::System::Boolean UseDieStateCount; // 0x29
		::System::Boolean DisableMonsterGravity; // 0x2A

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG_MONSTERWAVE__CTOR_OFFSET))(this);
		}
	};
}
