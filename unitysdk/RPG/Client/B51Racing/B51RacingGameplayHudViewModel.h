#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0x1B6B0720)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingGameplayHudViewModel_TypeDefinitionIndex = 80710;

	class B51RacingGameplayHudViewModel : public ::System::Object
	{
	public:
		::System::Boolean IsAttackOnCooldown; // 0x10
		::System::Boolean HasBestLapTime; // 0x11
		::System::Int32 BulletMaxUsableCount; // 0x14
		::System::Single AttackCooldownProgress; // 0x18
		::System::Int32 TotalLap; // 0x1C
		::System::Single UltimateChargePercent; // 0x20
		::System::UInt32 BoostChargeLevel; // 0x24
		::System::Single MaxSpeed; // 0x28
		::System::Single BoostCurrentChargeValue; // 0x2C
		::System::Int32 BulletUsableCount; // 0x30
		::System::Single BestLapTime; // 0x34
		::System::Int32 CurrentLap; // 0x38
		::System::Single UltimateDisplayPercent; // 0x3C
		::System::Single AttackEnergyPercent; // 0x40
		::System::Single Speed; // 0x44
		::System::Single CurrentTime; // 0x48
		::System::Int32 PlayerRank; // 0x4C
		::System::Single AttackCooldownRemainSeconds; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGGAMEPLAYHUDVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
