#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class LevelShootGameConfig_MonsterWave; }
namespace MoleMole::Config { class LevelShootGameConfig_MonsterWaveGroup; }
namespace MoleMole::Config { class LevelShootGameConfig_WaveParam; }
namespace MoleMole::Config { class LevelShootGameConfig_WayPathConfig; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x11034000)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelShootGameConfig_TypeDefinitionIndex = 58580;

	class LevelShootGameConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_WayPathConfig*>* WayPathConfigs; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_MonsterWaveGroup*>* GroupConfigs; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::LevelShootGameConfig_MonsterWave*>* WaveConfigs; // 0x68
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::MoleMole::Config::LevelShootGameConfig_WaveParam*>*>* GameConfigs; // 0x70
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* AvatarOverrideConfigs; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELSHOOTGAMECONFIG__CTOR_OFFSET))(this);
		}
	};
}
