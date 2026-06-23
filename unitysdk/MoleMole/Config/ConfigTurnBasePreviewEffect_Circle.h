#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigTurnBasePreviewEffect.h"

#define MOLEMOLE_CONFIG_CONFIGTURNBASEPREVIEWEFFECT_CIRCLE__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA64D50)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigTurnBasePreviewEffect_Circle_TypeDefinitionIndex = 56604;

	class ConfigTurnBasePreviewEffect_Circle : public ::MoleMole::Config::ConfigTurnBasePreviewEffect
	{
	public:
		::System::Single Radius; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGTURNBASEPREVIEWEFFECT_CIRCLE__CTOR_OFFSET))(this);
		}
	};
}
