#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_METHOD_6_9225167B1DDAF7D7_OFFSET UNITYSDK_OFFSET(0x19AE88B0)
#define RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_METHOD_6_A8BC94C0F3624862_OFFSET UNITYSDK_OFFSET(0x19AE8AD0)
#define RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE89F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActGetThenDestroyRogueMiracleConfig_TypeDefinitionIndex = 18639;

	class RogueActGetThenDestroyRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_9225167B1DDAF7D7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_METHOD_6_9225167B1DDAF7D7_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_A8BC94C0F3624862(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActGetThenDestroyRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTGETTHENDESTROYROGUEMIRACLECONFIG_METHOD_6_A8BC94C0F3624862_OFFSET))(a1, a2);
		}
	};
}
