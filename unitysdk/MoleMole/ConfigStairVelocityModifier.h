#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/BaseConfigEnvironmentFeatureModifier.h"

#define MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER__CTOR_OFFSET UNITYSDK_OFFSET(0x161AEBF0)

namespace MoleMole
{
	inline static constexpr unsigned int ConfigStairVelocityModifier_TypeDefinitionIndex = 52158;

	class ConfigStairVelocityModifier : public ::MoleMole::BaseConfigEnvironmentFeatureModifier
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIGSTAIRVELOCITYMODIFIER__CTOR_OFFSET))(this);
		}
	};
}
