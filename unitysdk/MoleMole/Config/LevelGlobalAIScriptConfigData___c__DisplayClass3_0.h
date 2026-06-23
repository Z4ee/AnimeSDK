#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class LevelGlobalAIScriptConfig; }
namespace System { class Action; }

#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET UNITYSDK_OFFSET(0x158BF5B0)
#define MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA___C__DISPLAYCLASS3_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x158BF5C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int LevelGlobalAIScriptConfigData___c__DisplayClass3_0_TypeDefinitionIndex = 54604;

	class LevelGlobalAIScriptConfigData___c__DisplayClass3_0 : public ::System::Object
	{
	public:
		::System::Action* complete; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA___C__DISPLAYCLASS3_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_b__0(::MoleMole::Config::LevelGlobalAIScriptConfig* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::LevelGlobalAIScriptConfig*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_LEVELGLOBALAISCRIPTCONFIGDATA___C__DISPLAYCLASS3_0__RELOADFROMFILE_B__0_OFFSET))(this, config);
		}
	};
}
