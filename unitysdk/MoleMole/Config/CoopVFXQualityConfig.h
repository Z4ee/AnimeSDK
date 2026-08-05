#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class CoopVFXConfig; }

#define MOLEMOLE_CONFIG_COOPVFXQUALITYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x172B3B20)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CoopVFXQualityConfig_TypeDefinitionIndex = 76875;

	class CoopVFXQualityConfig : public ::System::Object
	{
	public:
		::MoleMole::Config::CoopVFXConfig* DefaultVFXQualityConfig; // 0x10
		::MoleMole::Config::CoopVFXConfig* HighVFXQualityConfig; // 0x18
		::MoleMole::Config::CoopVFXConfig* MiddleVFXQualityConfig; // 0x20
		::MoleMole::Config::CoopVFXConfig* LowVFXQualityConfig; // 0x28
		::MoleMole::Config::CoopVFXConfig* VeryLowVFXQualityConfig; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_COOPVFXQUALITYCONFIG__CTOR_OFFSET))(this);
		}
	};
}
