#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Foundation/MihoyoSerializedScriptableObject.h"

namespace MoleMole::Config { class EffectLODDataConfig_LODConfigItem; }

#define MOLEMOLE_CONFIG_EFFECTLODDATACONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x17541630)

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectLODDataConfig_TypeDefinitionIndex = 42603;

	class EffectLODDataConfig : public ::Foundation::MihoyoSerializedScriptableObject
	{
	public:
		::MoleMole::Config::EffectLODDataConfig_LODConfigItem* highConfig; // 0x58
		::MoleMole::Config::EffectLODDataConfig_LODConfigItem* mediumConfig; // 0x60
		::MoleMole::Config::EffectLODDataConfig_LODConfigItem* lowConfig; // 0x68

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_EFFECTLODDATACONFIG__CTOR_OFFSET))(this);
		}
	};
}
