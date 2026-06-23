#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATE__CTOR_OFFSET UNITYSDK_OFFSET(0x17D63420)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemPredicate_TypeDefinitionIndex = 49414;

	class ConfigSurfGameItemPredicate : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMPREDICATE__CTOR_OFFSET))(this);
		}
	};
}
