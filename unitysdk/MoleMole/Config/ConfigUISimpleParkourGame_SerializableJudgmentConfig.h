#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_19461BA1CD085490;
namespace MoleMole::Config { class ConfigUISimpleParkourGame_SerializableJudgmentRange; }

#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_GET_HASGOODRANGE_OFFSET UNITYSDK_OFFSET(0x18F3C9C0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_GET_HASPERFECTRANGE_OFFSET UNITYSDK_OFFSET(0x18F3C9B0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_TOJUDGMENTCONFIG_OFFSET UNITYSDK_OFFSET(0x18F3C9D0)
#define MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18F3CE30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigUISimpleParkourGame_SerializableJudgmentConfig_TypeDefinitionIndex = 72943;

	class ConfigUISimpleParkourGame_SerializableJudgmentConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentRange* PerfectRange; // 0x10
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentRange* GoodRange; // 0x18
		::MoleMole::Config::ConfigUISimpleParkourGame_SerializableJudgmentRange* BadRange; // 0x20
		::System::Single PerfectMultiplier; // 0x28
		::System::Single GoodMultiplier; // 0x2C
		::System::Single BadMultiplier; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG__CTOR_OFFSET))(this);
		}

		::System::Boolean get_HasPerfectRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_GET_HASPERFECTRANGE_OFFSET))(this);
		}

		::System::Boolean get_HasGoodRange()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_GET_HASGOODRANGE_OFFSET))(this);
		}

		::Class_1_19461BA1CD085490* ToJudgmentConfig()
		{
			return ((::Class_1_19461BA1CD085490*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGUISIMPLEPARKOURGAME_SERIALIZABLEJUDGMENTCONFIG_TOJUDGMENTCONFIG_OFFSET))(this);
		}
	};
}
