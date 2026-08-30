#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::GameCore { class BaseLittleGameAbilityValueGetterConfig; }

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG_METHOD_3_4FA9194AE37A8FE3_OFFSET UNITYSDK_OFFSET(0x1D1FDBF0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG_METHOD_3_BEB98EBE3D0F72F7_OFFSET UNITYSDK_OFFSET(0x1D1FDCC0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1D1FDCB0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersSpeedUpEffectConfig_TypeDefinitionIndex = 21166;

	class LittleGameAbilityTeamTowersSpeedUpEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::RPG::GameCore::BaseLittleGameAbilityValueGetterConfig* Ratio; // 0x10

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_4FA9194AE37A8FE3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersSpeedUpEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersSpeedUpEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG_METHOD_3_4FA9194AE37A8FE3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEB98EBE3D0F72F7(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersSpeedUpEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersSpeedUpEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSSPEEDUPEFFECTCONFIG_METHOD_3_BEB98EBE3D0F72F7_OFFSET))(a1, a2);
		}
	};
}
