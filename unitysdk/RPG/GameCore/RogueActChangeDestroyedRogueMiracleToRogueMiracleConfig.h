#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_6_0B7993041CE43B86_OFFSET UNITYSDK_OFFSET(0x1D3B6C70)
#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_6_43C853D5471CA822_OFFSET UNITYSDK_OFFSET(0x1D3B6CC0)
#define RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D3B6CB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig_TypeDefinitionIndex = 19386;

	class RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_0B7993041CE43B86(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_6_0B7993041CE43B86_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_43C853D5471CA822(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeDestroyedRogueMiracleToRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEDESTROYEDROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_6_43C853D5471CA822_OFFSET))(a1, a2);
		}
	};
}
