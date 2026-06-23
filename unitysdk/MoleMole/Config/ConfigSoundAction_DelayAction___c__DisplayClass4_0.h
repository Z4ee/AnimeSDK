#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_0_16E4307DCC419505_197;
namespace MoleMole::Config { class ConfigSoundAction_DelayAction; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1AA60BE0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS4_0__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x1AA60BF0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_DelayAction___c__DisplayClass4_0_TypeDefinitionIndex = 75386;

	class ConfigSoundAction_DelayAction___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::Class_0_16E4307DCC419505_197* context; // 0x10
		::MoleMole::Config::ConfigSoundAction_DelayAction* __4__this; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAYACTION___C__DISPLAYCLASS4_0__EXECUTE_B__0_OFFSET))(this);
		}
	};
}
