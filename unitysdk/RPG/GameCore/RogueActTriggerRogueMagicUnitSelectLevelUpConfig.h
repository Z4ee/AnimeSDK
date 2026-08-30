#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_6_1BEA7FB787633216_OFFSET UNITYSDK_OFFSET(0x1EE89B10)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_6_87216665DBE07BBA_OFFSET UNITYSDK_OFFSET(0x1EE89AC0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE89B00)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectLevelUpConfig_TypeDefinitionIndex = 19452;

	class RogueActTriggerRogueMagicUnitSelectLevelUpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_87216665DBE07BBA(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_6_87216665DBE07BBA_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_1BEA7FB787633216(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_6_1BEA7FB787633216_OFFSET))(a1, a2);
		}
	};
}
