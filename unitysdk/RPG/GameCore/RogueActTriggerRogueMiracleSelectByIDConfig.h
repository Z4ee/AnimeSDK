#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_METHOD_6_199FA554E3866CD8_OFFSET UNITYSDK_OFFSET(0x19AFD810)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_METHOD_6_B222CB112BD81515_OFFSET UNITYSDK_OFFSET(0x19AFDA30)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFD950)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleSelectByIDConfig_TypeDefinitionIndex = 18565;

	class RogueActTriggerRogueMiracleSelectByIDConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_199FA554E3866CD8(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_METHOD_6_199FA554E3866CD8_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B222CB112BD81515(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleSelectByIDConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLESELECTBYIDCONFIG_METHOD_6_B222CB112BD81515_OFFSET))(a1, a2);
		}
	};
}
