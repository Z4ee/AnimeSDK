#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ArmorTypeEnum.h"
#include "unitysdk/RPG/GameCore/WeaponTypeEnum.h"
#include "unitysdk/System/ValueType.h"

namespace RPG::GameCore { class GameEntity; }
namespace System { class String; }

namespace RPG::Client
{
	inline static constexpr unsigned int BattleGamePhase_DamageSoundData_TypeDefinitionIndex = 58232;

	struct alignas(8) BattleGamePhase_DamageSoundData
	{
		::RPG::GameCore::GameEntity* Target; // 0x10
		::System::Single StartTimeStamp; // 0x18
		::System::Boolean IsCritical; // 0x1C
		::System::Boolean TriggerHitSound; // 0x1D
		::System::String* SpecialHitSoundEvent; // 0x20
		::RPG::GameCore::ArmorTypeEnum ArmorType; // 0x28
		::RPG::GameCore::WeaponTypeEnum WeaponType; // 0x2C
	};
}
