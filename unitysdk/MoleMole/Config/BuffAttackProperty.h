#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigEntityAttackProperty; }

#define MOLEMOLE_CONFIG_BUFFATTACKPROPERTY__CTOR_OFFSET UNITYSDK_OFFSET(0x12EF81E0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int BuffAttackProperty_TypeDefinitionIndex = 87212;

	class BuffAttackProperty : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigEntityAttackProperty* AttackProperty; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_BUFFATTACKPROPERTY__CTOR_OFFSET))(this);
		}
	};
}
