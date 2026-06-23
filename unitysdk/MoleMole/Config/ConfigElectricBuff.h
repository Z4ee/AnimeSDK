#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_EffectByCharacterSize.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGELECTRICBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x12B38240)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigElectricBuff_TypeDefinitionIndex = 87602;

	class ConfigElectricBuff : public ::System::Object
	{
	public:
		::System::String* DamageAudio; // 0x10
		::MoleMole::Config::ConfigBuffMisc_EffectByCharacterSize EffectsBySize; // 0x18
		::System::Single BeHitEffectInterval; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGELECTRICBUFF__CTOR_OFFSET))(this);
		}
	};
}
