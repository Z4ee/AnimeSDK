#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_2_56CF0C0596403FA8;
namespace MoleMole::Config { class ConfigSoundAction_Delay; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS6_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1437F910)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Delay___c__DisplayClass6_0_TypeDefinitionIndex = 75358;

	class ConfigSoundAction_Delay___c__DisplayClass6_0 : public ::System::Object
	{
	public:
		::MoleMole::Config::ConfigSoundAction_Delay* __4__this; // 0x10
		::Class_2_56CF0C0596403FA8* audioManager; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS6_0__CTOR_OFFSET))(this);
		}
	};
}
