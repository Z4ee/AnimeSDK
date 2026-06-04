#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_6_AE395256041D4827_OFFSET UNITYSDK_OFFSET(0x19AFC680)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_6_FD9C3E2501757B02_OFFSET UNITYSDK_OFFSET(0x19AFC460)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFC5A0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitRandomLevelUpConfig_TypeDefinitionIndex = 18650;

	class RogueActTriggerRogueMagicUnitRandomLevelUpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_FD9C3E2501757B02(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_6_FD9C3E2501757B02_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AE395256041D4827(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_6_AE395256041D4827_OFFSET))(a1, a2);
		}
	};
}
