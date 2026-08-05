#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGEROSIONBUFF__CTOR_OFFSET UNITYSDK_OFFSET(0x1B54BF60)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigErosionBuff_TypeDefinitionIndex = 91407;

	class ConfigErosionBuff : public ::System::Object
	{
	public:
		::System::String* DamageAudio; // 0x10
		::System::String* MaterialPropertyKey; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGEROSIONBUFF__CTOR_OFFSET))(this);
		}
	};
}
