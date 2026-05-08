#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_207;

#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTION_EXECUTE_OFFSET UNITYSDK_OFFSET(0x186BEC20)
#define MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTION__CTOR_OFFSET UNITYSDK_OFFSET(0x186BEC80)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSurfGameItemAction_TypeDefinitionIndex = 40205;

	class ConfigSurfGameItemAction : public ::System::Object
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTION__CTOR_OFFSET))(this);
		}

		::System::Void Execute(::Class_0_16E4307DCC419505_207* source)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_207*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSURFGAMEITEMACTION_EXECUTE_OFFSET))(this, source);
		}
	};
}
