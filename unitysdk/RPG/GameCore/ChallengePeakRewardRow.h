#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengePeakRewardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGEPEAKREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1705E4A0)
#define RPG_GAMECORE_CHALLENGEPEAKREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1705E670)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengePeakRewardRow_TypeDefinitionIndex = 11837;

	class ChallengePeakRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::RPG::GameCore::ChallengePeakRewardType RewardType; // 0x14
		::System::UInt32 ID; // 0x18
		::System::UInt32 RewardGroupID; // 0x1C
		::System::UInt32 TypeValue; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengePeakRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengePeakRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
