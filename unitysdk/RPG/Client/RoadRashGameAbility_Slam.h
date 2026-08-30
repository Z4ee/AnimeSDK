#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/BaseLittleGameAbilityTaskConfig.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"

class Class_1_7A22A3DBEEDD1F80;
namespace RPG::Client { class RoadRashGameAbilityValueModifer; }
namespace RPG::Client { class RoadRashGameAbility_SlamParams; }
namespace System { class String; }

#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAM_METHOD_4_108B3642A1ADA4C0_OFFSET UNITYSDK_OFFSET(0x1CD593D0)
#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAM_METHOD_4_6DE1294357AED72E_OFFSET UNITYSDK_OFFSET(0x1CD59410)
#define RPG_CLIENT_ROADRASHGAMEABILITY_SLAM__CTOR_OFFSET UNITYSDK_OFFSET(0x1CD59400)

namespace RPG::Client
{
	inline static constexpr unsigned int RoadRashGameAbility_Slam_TypeDefinitionIndex = 10280;

	class RoadRashGameAbility_Slam : public ::RPG::GameCore::BaseLittleGameAbilityTaskConfig
	{
	public:
		::RPG::GameCore::FixPoint RequireCastTime; // 0x18
		::RPG::Client::RoadRashGameAbility_SlamParams* Config; // 0x20
		::RPG::Client::RoadRashGameAbility_SlamParams* Lv2Config; // 0x28
		::RPG::Client::RoadRashGameAbility_SlamParams* Lv3Config; // 0x30
		::RPG::Client::RoadRashGameAbility_SlamParams* Lv4Config; // 0x38
		::System::String* ImpactModifierToggleName; // 0x40
		::Il2CppArray<::RPG::Client::RoadRashGameAbilityValueModifer*>* ImpactSpeedModifier; // 0x48
		::System::String* LV2ToggleName; // 0x50
		::System::String* LV3ToggleName; // 0x58
		::System::String* LV3VisualToggleName; // 0x60
		::System::String* LV4ToggleName; // 0x68
		::System::String* ImpactTriggerToggleName; // 0x70
		::System::String* ImpactTriggerModifierName; // 0x78
		::System::String* TaskUnlock; // 0x80
		::System::String* EnhanceImpactSpeedModifierToggleName; // 0x88
		::RPG::GameCore::FixPoint SlamTargetSpeedClampRatio; // 0x90
		::RPG::GameCore::FixPoint FOV; // 0x98
		::RPG::GameCore::FixPoint FOVDuration; // 0xA0
		::System::String* FOVBlendInCurveName; // 0xA8
		::RPG::GameCore::FixPoint FOVBlendInTime; // 0xB0
		::System::String* FOVBlendOutCurveName; // 0xB8
		::RPG::GameCore::FixPoint FOVBlendOutTime; // 0xC0
		::RPG::GameCore::FixPoint BlurRadius; // 0xC8
		::RPG::GameCore::FixPoint BlurStart; // 0xD0
		::RPG::GameCore::FixPoint BlurFeather; // 0xD8
		::RPG::GameCore::FixPoint ImpactFOV; // 0xE0
		::RPG::GameCore::FixPoint ImpactFOVDuration; // 0xE8
		::System::String* ImpactFOVBlendInCurveName; // 0xF0
		::RPG::GameCore::FixPoint ImpactFOVBlendInTime; // 0xF8
		::System::String* ImpactFOVBlendOutCurveName; // 0x100
		::RPG::GameCore::FixPoint ImpactFOVBlendOutTime; // 0x108
		::RPG::GameCore::FixPoint ImpactBlurRadius; // 0x110
		::RPG::GameCore::FixPoint ImpactBlurStart; // 0x118
		::RPG::GameCore::FixPoint ImpactBlurFeather; // 0x120
		::RPG::GameCore::FixPoint ImpactBlurDuration; // 0x128

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAM__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_4_108B3642A1ADA4C0(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_Slam*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_Slam*&))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAM_METHOD_4_108B3642A1ADA4C0_OFFSET))(a1, a2);
		}

		static ::System::Void Method_4_6DE1294357AED72E(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::Client::RoadRashGameAbility_Slam* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::Client::RoadRashGameAbility_Slam*))((::PBYTE)hIl2Cpp + RPG_CLIENT_ROADRASHGAMEABILITY_SLAM_METHOD_4_6DE1294357AED72E_OFFSET))(a1, a2);
		}
	};
}
