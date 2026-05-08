#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F1B93E9ABCA6C70F;
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableNodeConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x11CB65C0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG___C__DISPLAYCLASS6_0__TOWAVECONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x11CB6800)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SerializableWaveConfig___c__DisplayClass6_0_TypeDefinitionIndex = 43830;

	class ConfigUISimpleParkourGame_SerializableWaveConfig___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* globalConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}

		::Class_1_F1B93E9ABCA6C70F* _ToWaveConfig_b__0(::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig* n)
		{
			return ((::Class_1_F1B93E9ABCA6C70F*(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEWAVECONFIG___C__DISPLAYCLASS6_0__TOWAVECONFIG_B__0_OFFSET))(this, n);
		}
	};
}
