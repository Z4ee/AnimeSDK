#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace System { class String; }
namespace UnityEngine { class AnimationCurve; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int RoadRashGameSettingsConfigure_ImpactEffectConfig_TypeDefinitionIndex = 75480;

	struct alignas(8) RoadRashGameSettingsConfigure_ImpactEffectConfig
	{
		::System::Single StartValue; // 0x10
		::System::Single EndValue; // 0x14
		::System::Single Duration; // 0x18
		::UnityEngine::AnimationCurve* Curve; // 0x20
		::System::String* VisualEffectPath; // 0x28
		::System::Single VisualEffectScale; // 0x30
		::System::Single VisualEffectCooldown; // 0x34
		::System::Single VisualEffectDuration; // 0x38
		::System::Single KnockbackCooldown; // 0x3C
		::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* FrontImpactSpeedLossModifier; // 0x40
	};
}
