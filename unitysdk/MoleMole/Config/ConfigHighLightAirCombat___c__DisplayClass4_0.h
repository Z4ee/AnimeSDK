#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole::Config { class ConfigHighLightAirCombat; }
namespace System { class Action; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT___C__DISPLAYCLASS4_0__CTOR_OFFSET UNITYSDK_OFFSET(0x1BD5D2B0)
#define MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT___C__DISPLAYCLASS4_0__RELOADFROMFILE_B__0_OFFSET UNITYSDK_OFFSET(0x1BD5D2C0)

namespace MoleMole::Config
{
	inline static constexpr unsigned int ConfigHighLightAirCombat___c__DisplayClass4_0_TypeDefinitionIndex = 66516;

	class ConfigHighLightAirCombat___c__DisplayClass4_0 : public ::System::Object
	{
	public:
		::System::Action_1<::MoleMole::Config::ConfigHighLightAirCombat*>* __9__0; // 0x10
		::System::Action* complete; // 0x18
		::System::Int32 inLoadingRef; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT___C__DISPLAYCLASS4_0__CTOR_OFFSET))(this);
		}

		::System::Void _ReloadFromFile_b__0(::MoleMole::Config::ConfigHighLightAirCombat* config)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigHighLightAirCombat*))((::PBYTE)hIl2Cpp + MOLEMOLE_CONFIG_CONFIGHIGHLIGHTAIRCOMBAT___C__DISPLAYCLASS4_0__RELOADFROMFILE_B__0_OFFSET))(this, config);
		}
	};
}
