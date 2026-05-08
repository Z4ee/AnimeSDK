#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/SpaceEffectBaseConfig.h"

class Class_0_16E4307DCC419505_324;

#define MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG_CREATEINSTANCE_OFFSET UNITYSDK_OFFSET(0x14259020)
#define MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x14259100)

namespace MoleMole::Config
{
	inline static constexpr unsigned int VirtualSpaceCubeEffectConfig_TypeDefinitionIndex = 78370;

	class VirtualSpaceCubeEffectConfig : public ::MoleMole::Config::SpaceEffectBaseConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_324* CreateInstance()
		{
			return ((::Class_0_16E4307DCC419505_324*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_VIRTUALSPACECUBEEFFECTCONFIG_CREATEINSTANCE_OFFSET))(this);
		}
	};
}
