#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_EffectByCharacterSize.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGOVERLOADBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x18F38E10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigOverloadBuff_TypeDefinitionIndex = 70565;

	class ConfigOverloadBuff : public ::System::Object
	{
	public:
		::System::String* DamageAudio; // 0x10
		::System::String* ParalysisZoneTag; // 0x18
		::MoleMole::Config::ConfigBuffMisc_EffectByCharacterSize EffectsBySize; // 0x20
		::System::Single ControlTime; // 0x38
		::System::Single BeHitEffectInterval; // 0x3C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGOVERLOADBUFF__CTOR_OFFSET))(this);
		}
	};
}
