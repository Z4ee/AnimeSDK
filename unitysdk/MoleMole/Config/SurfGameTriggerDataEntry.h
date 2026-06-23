#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace MoleMole::Config { class ConfigSurfGameItemAction; }

#define MOLEMOLE_CONFIG_SURFGAMETRIGGERDATAENTRY_ISVALID_OFFSET UNITYSDK_OFFSET(0x86D0A0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int SurfGameTriggerDataEntry_TypeDefinitionIndex = 51807;

	struct alignas(8) SurfGameTriggerDataEntry
	{
		::System::Int32 ID; // 0x10
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* triggerEnterActionConfigs; // 0x18
		::Il2CppArray<::MoleMole::Config::ConfigSurfGameItemAction*>* triggerExitActionConfigs; // 0x20

		::System::Boolean IsValid()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_SURFGAMETRIGGERDATAENTRY_ISVALID_OFFSET))(this);
		}
	};
}
