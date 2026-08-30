#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/JsonConfig.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG_METHOD_2_18B0F1905E18CC4F_OFFSET UNITYSDK_OFFSET(0x1E0DF8B0)
#define RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x1E0DFC60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FiveDimAchievementConfig_TypeDefinitionIndex = 16493;

	class FiveDimAchievementConfig : public ::RPG::GameCore::JsonConfig
	{
	public:
		::System::Single IceSlideTime; // 0x10
		::System::Single IceSlideResetTime; // 0x14
		::System::Int32 OneShootCollectCoinNum; // 0x18
		::System::Single StayAirTime; // 0x1C
		::System::UInt32 PassGravityLineInAirTime; // 0x20
		::System::Single DashOrbConsecutiveInterval; // 0x24
		::System::Int32 DashOrbConsecutiveCount; // 0x28
		::System::Single DashOrbBackForthTime; // 0x2C
		::System::Int32 DashHitConsecutiveCount; // 0x30
		::System::Single MiniGameWithoutCollectCoinTime; // 0x34

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_2_18B0F1905E18CC4F(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FiveDimAchievementConfig*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FiveDimAchievementConfig*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIVEDIMACHIEVEMENTCONFIG_METHOD_2_18B0F1905E18CC4F_OFFSET))(a1, a2);
		}
	};
}
