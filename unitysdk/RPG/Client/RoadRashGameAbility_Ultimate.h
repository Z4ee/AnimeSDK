#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATE_METHOD_4_7ACA5D6B07D96618_OFFSET UNITYSDK_OFFSET(0x1D317AB0)
#define RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATE_METHOD_4_7BC82568218F9BA3_OFFSET UNITYSDK_OFFSET(0x1D317A70)
#define RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATE__CTOR_OFFSET UNITYSDK_OFFSET(0x1D317AA0)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_Ultimate_TypeDefinitionIndex = 10282;

	class RoadRashGameAbility_Ultimate : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint MoveSpeed; // 0x18
		::RPG::GameCore::FixPoint MoveDuration; // 0x20
		::RPG::GameCore::FixPoint EnergyDecreaseSpeed; // 0x28
		::RPG::GameCore::FixPoint ChargeInterruptMinEnergyPercent; // 0x30
		::System::String* AdditionalMoveSpeedAttributeName; // 0x38
		::System::String* AdditionalMoveDurationAttributeName; // 0x40
		::RPG::GameCore::FixPoint CenterLerpDuration; // 0x48
		::System::String* CenterLerpCurveName; // 0x50
		::RPG::GameCore::FixPoint SpeedLerpDuration; // 0x58
		::System::String* SpeedLerpCurveName; // 0x60
		::System::String* EnhanceQTEToggleName; // 0x68
		::System::String* EnhanceQTEModifierName; // 0x70
		::System::String* TaskUnlock; // 0x78
		::RPG::GameCore::FixPoint FOV; // 0x80
		::RPG::GameCore::FixPoint FOVDuration; // 0x88
		::System::String* FOVBlendInCurveName; // 0x90
		::RPG::GameCore::FixPoint FOVBlendInTime; // 0x98
		::System::String* FOVBlendOutCurveName; // 0xA0
		::RPG::GameCore::FixPoint FOVBlendOutTime; // 0xA8
		::RPG::GameCore::FixPoint BlurRadius; // 0xB0
		::RPG::GameCore::FixPoint BlurStart; // 0xB8
		::RPG::GameCore::FixPoint BlurFeather; // 0xC0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATE__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_7BC82568218F9BA3(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_Ultimate*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_Ultimate*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATE_METHOD_4_7BC82568218F9BA3_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_7ACA5D6B07D96618(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_Ultimate* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_Ultimate*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_ULTIMATE_METHOD_4_7ACA5D6B07D96618_OFFSET))(a1, a2);
		}
	};
}
