#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

class Class_2_C2B0CD36FFC49CE8;
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourLevelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_APPLYGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x16C55090)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_APPLYLEVELCONFIG_OFFSET UNITYSDK_OFFSET(0x16C55300)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CREATEGAMEDATA_OFFSET UNITYSDK_OFFSET(0x16C54DF0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_ONENABLE_OFFSET UNITYSDK_OFFSET(0x16C54920)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_UPDATEPARENTREFERENCES_OFFSET UNITYSDK_OFFSET(0x16C54A90)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME__CTOR_OFFSET UNITYSDK_OFFSET(0x16C554F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_TypeDefinitionIndex = 73970;

	class ConfigUISimpleParkourGame : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::System::Collections::Generic::Dictionary_2<::System::String*, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*>* GlobalConfigs; // 0x58
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig*>* LevelConfigs; // 0x60
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* DifficultyToTutorialGroup; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_ONENABLE_OFFSET))(this);
		}

		::System::Void UpdateParentReferences()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_UPDATEPARENTREFERENCES_OFFSET))(this);
		}

		::Class_2_C2B0CD36FFC49CE8* CreateGameData(::System::Int32 levelId)
		{
			return ((::Class_2_C2B0CD36FFC49CE8*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_CREATEGAMEDATA_OFFSET))(this, levelId);
		}

		::System::Void ApplyGlobalConfig(::Class_2_C2B0CD36FFC49CE8* gameData, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C2B0CD36FFC49CE8*, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_APPLYGLOBALCONFIG_OFFSET))(this, gameData, config);
		}

		::System::Void ApplyLevelConfig(::Class_2_C2B0CD36FFC49CE8* gameData, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_C2B0CD36FFC49CE8*, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_APPLYLEVELCONFIG_OFFSET))(this, gameData, config);
		}
	};
}
