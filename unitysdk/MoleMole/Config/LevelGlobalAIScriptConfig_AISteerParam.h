#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_AISTEERPARAM__CTOR_OFFSET UNITYSDK_OFFSET(0x17D6BE10)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAIScriptConfig_AISteerParam_TypeDefinitionIndex = 40099;

	class LevelGlobalAIScriptConfig_AISteerParam : public ::System::Object
	{
	public:
		::System::Single SeparateStrength; // 0x10
		::System::Single GatherStrength; // 0x14

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIG_AISTEERPARAM__CTOR_OFFSET))(this);
		}
	};
}
