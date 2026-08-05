#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_EffectByCharacterSize.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGIGNITEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x134FF0F0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigIgniteBuff_TypeDefinitionIndex = 75789;

	class ConfigIgniteBuff : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigBuffMisc_EffectByCharacterSize EffectsBySize; // 0x10
		::System::String* IgniteDotEffectAudio; // 0x28
		::System::Single ControlTime; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGIGNITEBUFF__CTOR_OFFSET))(this);
		}
	};
}
