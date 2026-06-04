#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/TaskConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_STARTBATTLESCORINGABILITY_METHOD_3_8327C47FE48D0D90_OFFSET UNITYSDK_OFFSET(0x19CB6DB0)
#define RPG_GAMECORE_STARTBATTLESCORINGABILITY_METHOD_3_C63CD54A9892DFDC_OFFSET UNITYSDK_OFFSET(0x19CB6EC0)
#define RPG_GAMECORE_STARTBATTLESCORINGABILITY__CTOR_OFFSET UNITYSDK_OFFSET(0x19CB6E90)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StartBattleScoringAbility_TypeDefinitionIndex = 22143;

	class StartBattleScoringAbility : public ::RPG::GameCore::TaskConfig
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLESCORINGABILITY__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_8327C47FE48D0D90(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartBattleScoringAbility*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartBattleScoringAbility*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLESCORINGABILITY_METHOD_3_8327C47FE48D0D90_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_C63CD54A9892DFDC(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StartBattleScoringAbility* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StartBattleScoringAbility*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STARTBATTLESCORINGABILITY_METHOD_3_C63CD54A9892DFDC_OFFSET))(a1, a2);
		}
	};
}
