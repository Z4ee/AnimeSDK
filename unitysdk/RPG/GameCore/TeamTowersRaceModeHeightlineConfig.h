#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_TEAMTOWERSRACEMODEHEIGHTLINECONFIG_METHOD_2_D1950E01C7DA4C67_OFFSET UNITYSDK_OFFSET(0x1E1CF1B0)
#define RPG_GAMECORE_TEAMTOWERSRACEMODEHEIGHTLINECONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E1CF380)

namespace RPG::GameCore
{
	inline static constexpr unsigned int TeamTowersRaceModeHeightlineConfig_TypeDefinitionIndex = 18725;

	class TeamTowersRaceModeHeightlineConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single StartCountdown; // 0x10
		::System::UInt32 BossDamage; // 0x14
		::System::Single DecreaseCountdownOnReset; // 0x18
		::System::Single MinCountdown; // 0x1C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSRACEMODEHEIGHTLINECONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D1950E01C7DA4C67(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::TeamTowersRaceModeHeightlineConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::TeamTowersRaceModeHeightlineConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_TEAMTOWERSRACEMODEHEIGHTLINECONFIG_METHOD_2_D1950E01C7DA4C67_OFFSET))(a1, a2);
		}
	};
}
