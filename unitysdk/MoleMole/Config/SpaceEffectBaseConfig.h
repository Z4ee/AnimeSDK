#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_480;

#define MOLEMOLE_CONFIG_SPACEEFFECTBASECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1A3612E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SpaceEffectBaseConfig_TypeDefinitionIndex = 52049;

	class SpaceEffectBaseConfig : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SPACEEFFECTBASECONFIG__CTOR_OFFSET))(this);
		}
	};
}
