#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_DARKTEAMFIGHTFORMATIONPARAMS_METHOD_2_A6500252E7AF07C5_OFFSET UNITYSDK_OFFSET(0x18852850)
#define RPG_GAMECORE_DARKTEAMFIGHTFORMATIONPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x18852A40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int DarkTeamFightFormationParams_TypeDefinitionIndex = 15695;

	class DarkTeamFightFormationParams : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single Interval; // 0x10
		::System::Single MinWidth; // 0x14
		::System::Single MaxWidth; // 0x18
		::System::Single MinDistanceToLightTeam; // 0x1C
		::System::Single MaxDistanceToLightTeam; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMFIGHTFORMATIONPARAMS__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_A6500252E7AF07C5(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::DarkTeamFightFormationParams*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::DarkTeamFightFormationParams*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_DARKTEAMFIGHTFORMATIONPARAMS_METHOD_2_A6500252E7AF07C5_OFFSET))(a1, a2);
		}
	};
}
