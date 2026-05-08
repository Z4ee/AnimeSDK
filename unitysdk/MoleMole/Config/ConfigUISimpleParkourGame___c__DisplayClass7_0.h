#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_B9D6E7E76075C6E2_1;
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableWaveConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME___C__DISPLAYCLASS7_0__APPLYLEVELCONFIG_B__0_OFFSET UNITYSDK_OFFSET(0x159F8620)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME___C__DISPLAYCLASS7_0__CTOR_OFFSET UNITYSDK_OFFSET(0x159F8610)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame___c__DisplayClass7_0_TypeDefinitionIndex = 43823;

	class ConfigUISimpleParkourGame___c__DisplayClass7_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* globalConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME___C__DISPLAYCLASS7_0__CTOR_OFFSET))(this);
		}

		::Class_1_B9D6E7E76075C6E2_1* _ApplyLevelConfig_b__0(::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig* w)
		{
			return ((::Class_1_B9D6E7E76075C6E2_1*(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SerializableWaveConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME___C__DISPLAYCLASS7_0__APPLYLEVELCONFIG_B__0_OFFSET))(this, w);
		}
	};
}
