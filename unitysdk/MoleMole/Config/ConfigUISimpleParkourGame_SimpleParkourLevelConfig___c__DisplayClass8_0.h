#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableNodeConfig; }
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SimpleParkourGlobalConfig; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__DISPLAYCLASS8_0__CALCULATETOTALSCORE_B__1_OFFSET UNITYSDK_OFFSET(0x12722E20)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__DISPLAYCLASS8_0__CTOR_OFFSET UNITYSDK_OFFSET(0x12722B30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c__DisplayClass8_0_TypeDefinitionIndex = 72948;

	class ConfigUISimpleParkourGame_SimpleParkourLevelConfig___c__DisplayClass8_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUISimpleParkourGame_SimpleParkourGlobalConfig* globalConfig; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__DISPLAYCLASS8_0__CTOR_OFFSET))(this);
		}

		::System::Single _CalculateTotalScore_b__1(::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig* n)
		{
			return ((::System::Single(*)(::PVOID, ::MoleMole::Config::ConfigUISimpleParkourGame_SerializableNodeConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SIMPLEPARKOURLEVELCONFIG___C__DISPLAYCLASS8_0__CALCULATETOTALSCORE_B__1_OFFSET))(this, n);
		}
	};
}
