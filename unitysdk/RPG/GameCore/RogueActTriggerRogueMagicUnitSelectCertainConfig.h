#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG_METHOD_6_2542B1EE63941E43_OFFSET UNITYSDK_OFFSET(0x1EE89940)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG_METHOD_6_617877DD902D11C7_OFFSET UNITYSDK_OFFSET(0x1EE89990)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE89980)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectCertainConfig_TypeDefinitionIndex = 19446;

	class RogueActTriggerRogueMagicUnitSelectCertainConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2542B1EE63941E43(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCertainConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCertainConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG_METHOD_6_2542B1EE63941E43_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_617877DD902D11C7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCertainConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectCertainConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTCERTAINCONFIG_METHOD_6_617877DD902D11C7_OFFSET))(a1, a2);
		}
	};
}
