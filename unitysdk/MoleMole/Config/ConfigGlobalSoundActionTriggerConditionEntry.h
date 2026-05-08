#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ISoundActionTriggerCondition; }
namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTIONTRIGGERCONDITIONENTRY__CTOR_OFFSET UNITYSDK_OFFSET(0x159EC6B0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigGlobalSoundActionTriggerConditionEntry_TypeDefinitionIndex = 77354;

	class ConfigGlobalSoundActionTriggerConditionEntry : public ::System::Object
	{
	public:
		::System::String* key; // 0x10
		::MoleMole::Config::ISoundActionTriggerCondition* condition; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGGLOBALSOUNDACTIONTRIGGERCONDITIONENTRY__CTOR_OFFSET))(this);
		}
	};
}
