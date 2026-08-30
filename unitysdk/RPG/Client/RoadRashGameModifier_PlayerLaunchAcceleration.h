#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION_METHOD_4_729E7D35F8327C80_OFFSET UNITYSDK_OFFSET(0x1CD5EE60)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION_METHOD_4_8E89C3A6B56E694B_OFFSET UNITYSDK_OFFSET(0x1CD5EE20)
#define RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD5EE50)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameModifier_PlayerLaunchAcceleration_TypeDefinitionIndex = 10295;

	class RoadRashGameModifier_PlayerLaunchAcceleration : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint AdditiveSpeed; // 0x18
		::RPG::GameCore::FixPoint AdditiveSpeedDuration; // 0x20
		::RPG::GameCore::FixPoint AdditiveEffectDuration; // 0x28
		::RPG::GameCore::FixPoint FOV; // 0x30
		::RPG::GameCore::FixPoint FOVDuration; // 0x38
		::System::String* FOVBlendInCurveName; // 0x40
		::RPG::GameCore::FixPoint FOVBlendInTime; // 0x48
		::System::String* FOVBlendOutCurveName; // 0x50
		::RPG::GameCore::FixPoint FOVBlendOutTime; // 0x58
		::RPG::GameCore::FixPoint BlurRadius; // 0x60
		::RPG::GameCore::FixPoint BlurStart; // 0x68
		::RPG::GameCore::FixPoint BlurFeather; // 0x70
		::RPG::GameCore::FixPoint BlurDuration; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_8E89C3A6B56E694B(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION_METHOD_4_8E89C3A6B56E694B_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_729E7D35F8327C80(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameModifier_PlayerLaunchAcceleration*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEMODIFIER_PLAYERLAUNCHACCELERATION_METHOD_4_729E7D35F8327C80_OFFSET))(a1, a2);
		}
	};
}
