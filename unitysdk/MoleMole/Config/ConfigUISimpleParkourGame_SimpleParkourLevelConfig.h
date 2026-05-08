#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUISimpleParkourGame; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableWaveConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG_CALCULATETOTALNODECOUNT_OFFSET UNITYSDK_OFFSET(0x159F8A70)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG_CALCULATETOTALSCORE_OFFSET UNITYSDK_OFFSET(0x159F8700)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG_GETGLOBALCONFIG_OFFSET UNITYSDK_OFFSET(0x159F8CA0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG_GET_TOTALNODECOUNT_OFFSET UNITYSDK_OFFSET(0x159F8A60)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG_GET_TOTALSCORE_OFFSET UNITYSDK_OFFSET(0x159F86F0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x159F8EC0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SimpleParkourLevelConfig_TypeDefinitionIndex = 43824;

	class ConfigUISimpleParkourGame_SimpleParkourLevelConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUISimpleParkourGame* parentConfig; // 0x10
		::Il2CppArray<::System::UInt32>* DifficultyLevels; // 0x18
		::System::String* GlobalConfigKey; // 0x20
		::System::Collections::Generic::List_1<::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig*>* Waves; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG__CTOR_OFFSET))(this);
		}

		::System::Single get_TotalScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG_GET_TOTALSCORE_OFFSET))(this);
		}

		::System::Int32 get_TotalNodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG_GET_TOTALNODECOUNT_OFFSET))(this);
		}

		::System::Single CalculateTotalScore()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG_CALCULATETOTALSCORE_OFFSET))(this);
		}

		::System::Int32 CalculateTotalNodeCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG_CALCULATETOTALNODECOUNT_OFFSET))(this);
		}

		::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* GetGlobalConfig()
		{
			return ((::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG_GETGLOBALCONFIG_OFFSET))(this);
		}
	};
}
