#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_EffectByCharacterSize.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGCOMMONBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B7E4670)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigCommonBuff_TypeDefinitionIndex = 40627;

	class ConfigCommonBuff : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigBuffMisc_EffectByCharacterSize EffectsBySize; // 0x10
		::System::String* DamageAudio; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGCOMMONBUFF__CTOR_OFFSET))(this);
		}
	};
}
