#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseChimeraDuelEntitiesSelectorConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG_METHOD_3_8B1829E6C2466097_OFFSET UNITYSDK_OFFSET(0x1E32CF40)
#define RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG_METHOD_3_F04B45A590CCD326_OFFSET UNITYSDK_OFFSET(0x1E32CEA0)
#define RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E32CF30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChimeraDuelAllyTeamFieldSelectorConfig_TypeDefinitionIndex = 15766;

	class ChimeraDuelAllyTeamFieldSelectorConfig : public ::RPG::GameCore::BaseChimeraDuelEntitiesSelectorConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_F04B45A590CCD326(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAllyTeamFieldSelectorConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAllyTeamFieldSelectorConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG_METHOD_3_F04B45A590CCD326_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_8B1829E6C2466097(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChimeraDuelAllyTeamFieldSelectorConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChimeraDuelAllyTeamFieldSelectorConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHIMERADUELALLYTEAMFIELDSELECTORCONFIG_METHOD_3_8B1829E6C2466097_OFFSET))(a1, a2);
		}
	};
}
