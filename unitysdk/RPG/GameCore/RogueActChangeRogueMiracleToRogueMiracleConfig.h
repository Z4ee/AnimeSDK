#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/RogueActionConfigBase.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_6_B531DAABC539CB30_OFFSET UNITYSDK_OFFSET(0x19AE3C70)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_6_D87CCD3E99B0C64D_OFFSET UNITYSDK_OFFSET(0x19AE3E90)
#define RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x19AE3DB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int RogueActChangeRogueMiracleToRogueMiracleConfig_TypeDefinitionIndex = 18582;

	class RogueActChangeRogueMiracleToRogueMiracleConfig : public ::RPG::GameCore::RogueActionConfigBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_6_B531DAABC539CB30(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueMiracleConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueMiracleConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_6_B531DAABC539CB30_OFFSET))(a1, a2);
		}

		static ::System::Void Method_6_D87CCD3E99B0C64D(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueMiracleConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::RogueActChangeRogueMiracleToRogueMiracleConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ROGUEACTCHANGEROGUEMIRACLETOROGUEMIRACLECONFIG_METHOD_6_D87CCD3E99B0C64D_OFFSET))(a1, a2);
		}
	};
}
