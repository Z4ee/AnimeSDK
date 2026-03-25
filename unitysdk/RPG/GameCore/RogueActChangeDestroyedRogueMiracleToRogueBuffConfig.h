#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_6_492417CF5E44301A_OFFSET UNITYSDK_OFFSET(0x175B22D0)
#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_6_F385F1D585ADCB2F_OFFSET UNITYSDK_OFFSET(0x175B20B0)
#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x175B21F0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeDestroyedRogueMiracleToRogueBuffConfig_TypeDefinitionIndex = 17971;

	class RogueActChangeDestroyedRogueMiracleToRogueBuffConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_F385F1D585ADCB2F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueBuffConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueBuffConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_6_F385F1D585ADCB2F_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_492417CF5E44301A(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueBuffConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueBuffConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEBUFFCONFIG_METHOD_6_492417CF5E44301A_OFFSET))(a1, a2);
		}
	};
}
