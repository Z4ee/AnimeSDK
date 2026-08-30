#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_6_88F86DB99EA651A3_OFFSET UNITYSDK_OFFSET(0x1EE898E0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_6_AE395256041D4827_OFFSET UNITYSDK_OFFSET(0x1EE89930)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE89920)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMagicUnitRandomLevelUpConfig_TypeDefinitionIndex = 19453;

	class RogueActTriggerRogueMagicUnitRandomLevelUpConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_88F86DB99EA651A3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_6_88F86DB99EA651A3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AE395256041D4827(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMagicUnitRandomLevelUpConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMAGICUNITRANDOMLEVELUPCONFIG_METHOD_6_AE395256041D4827_OFFSET))(a1, a2);
		}
	};
}
