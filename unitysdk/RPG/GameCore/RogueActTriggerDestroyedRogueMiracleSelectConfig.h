#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_METHOD_6_6393A2DEFE04925B_OFFSET UNITYSDK_OFFSET(0x18CD4EC0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_METHOD_6_B19DAFF866D4B8DE_OFFSET UNITYSDK_OFFSET(0x18CD50E0)
#define RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x18CD5000)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerDestroyedRogueMiracleSelectConfig_TypeDefinitionIndex = 18602;

	class RogueActTriggerDestroyedRogueMiracleSelectConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_6393A2DEFE04925B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_METHOD_6_6393A2DEFE04925B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B19DAFF866D4B8DE(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerDestroyedRogueMiracleSelectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERDESTROYEDROGUEMIRACLESELECTCONFIG_METHOD_6_B19DAFF866D4B8DE_OFFSET))(a1, a2);
		}
	};
}
