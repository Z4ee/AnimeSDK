#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B9D6E7E76075C6E2_2;
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableNodeConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourLevelConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDDODGENODE_OFFSET UNITYSDK_OFFSET(0x14876750)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDHOLDNODE_OFFSET UNITYSDK_OFFSET(0x14876800)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTAPNODE_OFFSET UNITYSDK_OFFSET(0x148766A0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTOUCHNODE_OFFSET UNITYSDK_OFFSET(0x148768B0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_GETWAVEDISPLAYNAME_OFFSET UNITYSDK_OFFSET(0x14876AF0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_TOWAVECONFIG_OFFSET UNITYSDK_OFFSET(0x14876960)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14876CA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SerializableWaveConfig_TypeDefinitionIndex = 73980;

	class ConfigUISimpleParkourGame_SerializableWaveConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourLevelConfig* parentLevelConfig; // 0x10
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*>* Nodes; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG__CTOR_OFFSET))(this);
		}

		::System::Void AddTapNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTAPNODE_OFFSET))(this);
		}

		::System::Void AddDodgeNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDDODGENODE_OFFSET))(this);
		}

		::System::Void AddHoldNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDHOLDNODE_OFFSET))(this);
		}

		::System::Void AddTouchNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_ADDTOUCHNODE_OFFSET))(this);
		}

		::Class_1_B9D6E7E76075C6E2_2* ToWaveConfig(::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* globalConfig)
		{
			return ((::Class_1_B9D6E7E76075C6E2_2*(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_TOWAVECONFIG_OFFSET))(this, globalConfig);
		}

		::System::String* GetWaveDisplayName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG_GETWAVEDISPLAYNAME_OFFSET))(this);
		}
	};
}
