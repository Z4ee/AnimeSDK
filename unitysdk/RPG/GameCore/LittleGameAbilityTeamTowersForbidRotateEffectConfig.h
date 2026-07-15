#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityEffectConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG_METHOD_3_BEFEFEC9E37F3FD9_OFFSET UNITYSDK_OFFSET(0x1B096BB0)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG_METHOD_3_E499C6581C3DEC04_OFFSET UNITYSDK_OFFSET(0x1B096B10)
#define RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1B096BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int LittleGameAbilityTeamTowersForbidRotateEffectConfig_TypeDefinitionIndex = 20613;

	class LittleGameAbilityTeamTowersForbidRotateEffectConfig : public ::RPG::GameCore::BaseLittleGameAbilityEffectConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E499C6581C3DEC04(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersForbidRotateEffectConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersForbidRotateEffectConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG_METHOD_3_E499C6581C3DEC04_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_BEFEFEC9E37F3FD9(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::LittleGameAbilityTeamTowersForbidRotateEffectConfig* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::LittleGameAbilityTeamTowersForbidRotateEffectConfig*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_LITTLEGAMEABILITYTEAMTOWERSFORBIDROTATEEFFECTCONFIG_METHOD_3_BEFEFEC9E37F3FD9_OFFSET))(a1, a2);
		}
	};
}
