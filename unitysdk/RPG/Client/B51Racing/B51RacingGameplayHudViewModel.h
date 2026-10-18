#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC793A40)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplayHudViewModel_TypeDefinitionIndex = 82038;

	class B51RacingGameplayHudViewModel : public ::System::Object
	{
	public:
		::System::Single AttackCooldownRemainSeconds; // 0x10
		::System::Single MaxSpeed; // 0x14
		::System::Single Speed; // 0x18
		::System::Single UltimateDisplayPercent; // 0x1C
		::System::Int32 PlayerRank; // 0x20
		::System::Int32 BulletUsableCount; // 0x24
		::System::Single AttackEnergyPercent; // 0x28
		::System::UInt32 BoostChargeLevel; // 0x2C
		::System::Single BestLapTime; // 0x30
		::System::Boolean IsAttackOnCooldown; // 0x34
		::System::Boolean HasBestLapTime; // 0x35
		::System::Single UltimateChargePercent; // 0x38
		::System::Single CurrentTime; // 0x3C
		::System::Int32 TotalLap; // 0x40
		::System::Single AttackCooldownProgress; // 0x44
		::System::Int32 CurrentLap; // 0x48
		::System::Int32 BulletMaxUsableCount; // 0x4C
		::System::Single BoostCurrentChargeValue; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
