#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/PetPartyNavigateDestination.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION_METHOD_3_9455C24F333F48D6_OFFSET UNITYSDK_OFFSET(0x1D8DCD00)
#define RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION_METHOD_3_E628AD6F71194726_OFFSET UNITYSDK_OFFSET(0x1D8DD390)
#define RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION__CTOR_OFFSET UNITYSDK_OFFSET(0x1D8DCCD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int PetPartyRandomStrollDestination_TypeDefinitionIndex = 21083;

	class PetPartyRandomStrollDestination : public ::RPG::GameCore::PetPartyNavigateDestination
	{
	public:
		::System::Single MinDistance; // 0x10
		::System::Single MaxDistance; // 0x14
		::System::Single MaxDistanceToPlayer; // 0x18
		::System::Single MaxDistanceToFormationSlot; // 0x1C
		::System::Boolean StayAtFinalPositionOnFinish; // 0x20
		::System::Single MinTotalDurationSeconds; // 0x24
		::System::Single MaxTotalDurationSeconds; // 0x28
		::System::Single MinSingleStrollDurationSeconds; // 0x2C
		::System::Single MaxSingleStrollDurationSeconds; // 0x30
		::System::Single MinPauseDurationSeconds; // 0x34
		::System::Single MaxPauseDurationSeconds; // 0x38
		::System::Single MoveSpeedRatio; // 0x3C
		::System::Single RetryIntervalSeconds; // 0x40
		::System::Int32 MaxRetryCount; // 0x44

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION__CTOR_OFFSET))(this);
		}

		static ::System::Void Method_3_E628AD6F71194726(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyRandomStrollDestination*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyRandomStrollDestination*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION_METHOD_3_E628AD6F71194726_OFFSET))(a1, a2);
		}

		static ::System::Void Method_3_9455C24F333F48D6(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::PetPartyRandomStrollDestination* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::PetPartyRandomStrollDestination*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_PETPARTYRANDOMSTROLLDESTINATION_METHOD_3_9455C24F333F48D6_OFFSET))(a1, a2);
		}
	};
}
