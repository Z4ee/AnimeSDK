#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_METHOD_6_7794F7B9C9D5A014_OFFSET UNITYSDK_OFFSET(0x1EE89B80)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_METHOD_6_D756C1914B376110_OFFSET UNITYSDK_OFFSET(0x1EE89BD0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1EE89BC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleDropConfig_TypeDefinitionIndex = 19369;

	class RogueActTriggerRogueMiracleDropConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_7794F7B9C9D5A014(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_METHOD_6_7794F7B9C9D5A014_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D756C1914B376110(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleDropConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDROPCONFIG_METHOD_6_D756C1914B376110_OFFSET))(a1, a2);
		}
	};
}
