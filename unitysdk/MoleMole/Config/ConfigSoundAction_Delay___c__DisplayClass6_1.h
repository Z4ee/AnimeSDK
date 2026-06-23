#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_F3022E48190D43CB;
namespace MoleMole::Config { class ConfigSoundAction_Delay___c__DisplayClass6_0; }

#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS6_1__CTOR_OFFSET UNITYSDK_OFFSET(0x158B49B0)
#define MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS6_1__EXECUTE_B__0_OFFSET UNITYSDK_OFFSET(0x158B49C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigSoundAction_Delay___c__DisplayClass6_1_TypeDefinitionIndex = 66333;

	class ConfigSoundAction_Delay___c__DisplayClass6_1 : public ::System::Object
	{
	public:
		::Class_1_F3022E48190D43CB* copyContext; // 0x10
		::MoleMole::Config::ConfigSoundAction_Delay___c__DisplayClass6_0* CS___8__locals1; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS6_1__CTOR_OFFSET))(this);
		}

		::System::Void _Execute_b__0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGSOUNDACTION_DELAY___C__DISPLAYCLASS6_1__EXECUTE_B__0_OFFSET))(this);
		}
	};
}
