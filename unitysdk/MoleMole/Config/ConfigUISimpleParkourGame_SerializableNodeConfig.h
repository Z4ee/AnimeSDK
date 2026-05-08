#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ENodeEffect.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ENodeType.h"
#include "unitysdk/MoleMole/MiniUIGame/SimpleParkour/ETrackType.h"
#include "unitysdk/System/Object.h"

class Class_1_F1B93E9ABCA6C70F;
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLENODECONFIG_GETNODECOUNT_OFFSET UNITYSDK_OFFSET(0x16B43DD0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLENODECONFIG_GETNODEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x16B43E20)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLENODECONFIG_GETTOTALSCORE_OFFSET UNITYSDK_OFFSET(0x16B43D10)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLENODECONFIG_TONODECONFIG_OFFSET UNITYSDK_OFFSET(0x16B43B50)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLENODECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16B442D0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SerializableNodeConfig_TypeDefinitionIndex = 43828;

	class ConfigUISimpleParkourGame_SerializableNodeConfig : public ::System::Object
	{
	public:
		::MoleMole::MiniUIGame::SimpleParkour::ENodeType NodeType; // 0x10
		::System::Single AngleDelta; // 0x14
		::MoleMole::MiniUIGame::SimpleParkour::ETrackType Track; // 0x18
		::System::Boolean GrantsSpeedBoost; // 0x1C
		::MoleMole::MiniUIGame::SimpleParkour::ENodeEffect Effect; // 0x20
		::System::UInt32 HoldEndAngleDelta; // 0x24

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLENODECONFIG__CTOR_OFFSET))(this);
		}

		::Class_1_F1B93E9ABCA6C70F* ToNodeConfig(::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* globalConfig)
		{
			return ((::Class_1_F1B93E9ABCA6C70F*(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLENODECONFIG_TONODECONFIG_OFFSET))(this, globalConfig);
		}

		::System::Single GetTotalScore(::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* globalConfig)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLENODECONFIG_GETTOTALSCORE_OFFSET))(this, globalConfig);
		}

		::System::Int32 GetNodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLENODECONFIG_GETNODECOUNT_OFFSET))(this);
		}

		::System::String* GetNodeDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLENODECONFIG_GETNODEDISPLAYNAME_OFFSET))(this);
		}
	};
}
