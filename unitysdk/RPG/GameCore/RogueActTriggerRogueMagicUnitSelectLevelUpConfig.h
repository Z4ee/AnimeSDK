#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_6_1BEA7FB787633216_OFFSET UNITYSDK_OFFSET(0x18CD8BF0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_6_2E40A9A6747C3973_OFFSET UNITYSDK_OFFSET(0x18CD89D0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD8B10)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitSelectLevelUpConfig_TypeDefinitionIndex = 18682;

	class RogueActTriggerRogueMagicUnitSelectLevelUpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_2E40A9A6747C3973(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_6_2E40A9A6747C3973_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_1BEA7FB787633216(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitSelectLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITSELECTLEVELUPCONFIG_METHOD_6_1BEA7FB787633216_OFFSET))(a1, a2);
		}
	};
}
