#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/CharacterAimAutoTargeting.h"
#include "unitysdk/MoleMole/Config/CharacterAimSlowdown.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG_MOLEMOLE_CONFIG_ICHARACTERASSISTAIMCONFIG_GET_LABEL_OFFSET UNITYSDK_OFFSET(0x106C7D00)
#define MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x106C7D70)

namespace MoleMole::Config
{
	inline static constexpr unsigned int CharacterAssistAimConfig_TypeDefinitionIndex = 78345;

	class CharacterAssistAimConfig : public ::System::Object
	{
	public:
		::System::String* aimAssistTargetKey; // 0x10
		::MoleMole::Config::CharacterAimAutoTargeting aimAutoTargeting; // 0x18
		::MoleMole::Config::CharacterAimSlowdown aimSlowdown; // 0x30

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG__CTOR_OFFSET))(this);
		}

		::System::String* MoleMole_Config_ICharacterAssistAimConfig_get_Label()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CHARACTERASSISTAIMCONFIG_MOLEMOLE_CONFIG_ICHARACTERASSISTAIMCONFIG_GET_LABEL_OFFSET))(this);
		}
	};
}
