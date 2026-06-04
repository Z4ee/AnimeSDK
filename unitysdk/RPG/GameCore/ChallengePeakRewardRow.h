#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/ChallengePeakRewardType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGEPEAKREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x195FF580)
#define RPG_GAMECORE_CHALLENGEPEAKREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x195FF750)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengePeakRewardRow_TypeDefinitionIndex = 12354;

	class ChallengePeakRewardRow : public ::System::Object
	{
	public:
		::RPG::GameCore::ChallengePeakRewardType RewardType; // 0x10
		::System::UInt32 RewardGroupID; // 0x14
		::System::UInt32 RewardID; // 0x18
		::System::UInt32 TypeValue; // 0x1C
		::System::UInt32 ID; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengePeakRewardRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengePeakRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKREWARDROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
