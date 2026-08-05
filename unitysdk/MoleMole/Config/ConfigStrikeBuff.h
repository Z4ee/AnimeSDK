#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigBuffMisc_EffectByCharacterSize.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSTRIKEBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1170DD30)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigStrikeBuff_TypeDefinitionIndex = 89675;

	class ConfigStrikeBuff : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigBuffMisc_EffectByCharacterSize EffectsBySize; // 0x10
		::System::String* DamageAudio; // 0x28

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSTRIKEBUFF__CTOR_OFFSET))(this);
		}
	};
}
