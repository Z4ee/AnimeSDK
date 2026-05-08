#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_EffectByCharacterSize.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGELECTRICBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x12D35DA0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigElectricBuff_TypeDefinitionIndex = 58886;

	class ConfigElectricBuff : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigBuffMisc_EffectByCharacterSize EffectsBySize; // 0x10
		::System::String* DamageAudio; // 0x28
		::System::Single BeHitEffectInterval; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGELECTRICBUFF__CTOR_OFFSET))(this);
		}
	};
}
