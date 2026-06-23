#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_EffectByCharacterSize.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCOMMONBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x12B36180)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCommonBuff_TypeDefinitionIndex = 68918;

	class ConfigCommonBuff : public ::System::Object
	{
	public:
		::System::String* DamageAudio; // 0x10
		::MoleMole::Config::ConfigBuffMisc_EffectByCharacterSize EffectsBySize; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONBUFF__CTOR_OFFSET))(this);
		}
	};
}
