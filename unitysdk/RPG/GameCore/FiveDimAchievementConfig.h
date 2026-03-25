#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG_METHOD_2_D90A883AA977B17E_OFFSET UNITYSDK_OFFSET(0x171DBC30)
#define RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x171DBE50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAchievementConfig_TypeDefinitionIndex = 15274;

	class FiveDimAchievementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single IceSlideTime; // 0x10
		::System::Single IceSlideResetTime; // 0x14
		::System::Int32 OneShootCollectCoinNum; // 0x18
		::System::Single StayAirTime; // 0x1C
		::System::Single MiniGameWithoutCollectCoinTime; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_D90A883AA977B17E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAchievementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAchievementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG_METHOD_2_D90A883AA977B17E_OFFSET))(a1, a2);
		}
	};
}
