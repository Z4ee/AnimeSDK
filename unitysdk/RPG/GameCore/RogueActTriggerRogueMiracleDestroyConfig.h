#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_METHOD_6_A33AAE76EDABFD8C_OFFSET UNITYSDK_OFFSET(0x19AFD180)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_METHOD_6_AF498DCDE4607FC1_OFFSET UNITYSDK_OFFSET(0x19AFD3A0)
#define RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AFD2C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActTriggerRogueMiracleDestroyConfig_TypeDefinitionIndex = 18566;

	class RogueActTriggerRogueMiracleDestroyConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_A33AAE76EDABFD8C(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_METHOD_6_A33AAE76EDABFD8C_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_AF498DCDE4607FC1(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActTriggerRogueMiracleDestroyConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTTRIGGERROGUEMIRACLEDESTROYCONFIG_METHOD_6_AF498DCDE4607FC1_OFFSET))(a1, a2);
		}
	};
}
