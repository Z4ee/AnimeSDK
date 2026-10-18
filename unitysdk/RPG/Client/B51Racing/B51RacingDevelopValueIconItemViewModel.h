#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/B51RacingStatType.h"
#include "unitysdk/System/Object.h"

#define RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONITEMVIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xC792F40)

namespace RPG::Client::B51Racing
{
	inline static constexpr unsigned int B51RacingDevelopValueIconItemViewModel_TypeDefinitionIndex = 82025;

	class B51RacingDevelopValueIconItemViewModel : public ::System::Object
	{
	public:
		::System::UInt32 BoostLevel; // 0x10
		::System::UInt32 BonusValue; // 0x14
		::RPG::GameCore::B51RacingStatType StatType; // 0x18
		::System::Boolean IsAvatarBonus; // 0x1C
		::System::Boolean IsTarget; // 0x1D

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_B51RACING_B51RACINGDEVELOPVALUEICONITEMVIEWMODEL__CTOR_OFFSET))(this);
		}
	};
}
