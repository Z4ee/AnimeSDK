#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG_METHOD_3_9C04F34769FB3D73_OFFSET UNITYSDK_OFFSET(0x1D1FD190)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG_METHOD_3_C9676A95E7FFB8F2_OFFSET UNITYSDK_OFFSET(0x1D1FD0F0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FD180)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersDestroyBrickEffectConfig_TypeDefinitionIndex = 21168;

	class LittleGameAbilityTeamTowersDestroyBrickEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_C9676A95E7FFB8F2(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersDestroyBrickEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersDestroyBrickEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG_METHOD_3_C9676A95E7FFB8F2_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9C04F34769FB3D73(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersDestroyBrickEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersDestroyBrickEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSDESTROYBRICKEFFECTCONFIG_METHOD_3_9C04F34769FB3D73_OFFSET))(a1, a2);
		}
	};
}
