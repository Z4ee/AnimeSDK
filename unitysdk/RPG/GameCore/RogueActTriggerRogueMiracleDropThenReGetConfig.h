#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG_METHOD_6_77D8FC30CCFB7406_OFFSET UNITYSDK_OFFSET(0x1D3BBD90)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG_METHOD_6_B027BD01F733E0A2_OFFSET UNITYSDK_OFFSET(0x1D3BBDE0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3BBDD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleDropThenReGetConfig_TypeDefinitionIndex = 19370;

	class RogueActTriggerRogueMiracleDropThenReGetConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_77D8FC30CCFB7406(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDropThenReGetConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleDropThenReGetConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG_METHOD_6_77D8FC30CCFB7406_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_B027BD01F733E0A2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDropThenReGetConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleDropThenReGetConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPTHENREGETCONFIG_METHOD_6_B027BD01F733E0A2_OFFSET))(a1, a2);
		}
	};
}
