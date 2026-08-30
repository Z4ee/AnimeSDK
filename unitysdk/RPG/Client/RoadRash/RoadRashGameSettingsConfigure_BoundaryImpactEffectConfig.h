#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::Client::LittleGame::RoadRash { class RoadRashAbilityValueModifer; }
namespace System { class String; }

namespace RPG::Client::RoadRash
{
	inline static constexpr unsigned int RoadRashGameSettingsConfigure_BoundaryImpactEffectConfig_TypeDefinitionIndex = 75482;

	struct alignas(8) RoadRashGameSettingsConfigure_BoundaryImpactEffectConfig
	{
		::System::String* VisualEffectPath; // 0x10
		::System::Single VisualEffectScale; // 0x18
		::System::Single VisualEffectDuration; // 0x1C
		::Il2CppArray<::RPG::Client::LittleGame::RoadRash::RoadRashAbilityValueModifer*>* SpeedLossModifier; // 0x20
		::System::String* LeftAttachPointName; // 0x28
		::System::String* RightAttachPointName; // 0x30
	};
}
