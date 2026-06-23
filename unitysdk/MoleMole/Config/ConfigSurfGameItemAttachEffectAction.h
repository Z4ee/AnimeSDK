#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ConfigSurfGameItemAction.h"

namespace System { class String; }

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMATTACHEFFECTACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x1A35B330)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMATTACHEFFECTACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A35B730)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemAttachEffectAction_TypeDefinitionIndex = 47927;

	class ConfigSurfGameItemAttachEffectAction : public ::MoleMole::Config::ConfigSurfGameItemAction
	{
	public:
		::System::String* EffectPatternKey; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMATTACHEFFECTACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMATTACHEFFECTACTION_EXECUTE_OFFSET))(this);
		}
	};
}
