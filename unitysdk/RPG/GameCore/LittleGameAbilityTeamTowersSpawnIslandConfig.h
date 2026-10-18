#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"
#include "unitysdk/RPG/MVector2.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG_METHOD_3_68D395CEA4587124_OFFSET UNITYSDK_OFFSET(0x1D7AE670)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG_METHOD_3_A2DBAACD8DCC5548_OFFSET UNITYSDK_OFFSET(0x1D7AE610)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D7AE660)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersSpawnIslandConfig_TypeDefinitionIndex = 21416;

	class LittleGameAbilityTeamTowersSpawnIslandConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::MVector2 Delta; // 0x10
		::Il2CppArray<::System::UInt32>* IslandConfigIDs; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_A2DBAACD8DCC5548(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersSpawnIslandConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersSpawnIslandConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG_METHOD_3_A2DBAACD8DCC5548_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_68D395CEA4587124(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersSpawnIslandConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersSpawnIslandConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPAWNISLANDCONFIG_METHOD_3_68D395CEA4587124_OFFSET))(a1, a2);
		}
	};
}
