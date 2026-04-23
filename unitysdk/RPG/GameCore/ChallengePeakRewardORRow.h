#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_CHALLENGEPEAKREWARDORROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x187C3120)
#define RPG_GAMECORE_CHALLENGEPEAKREWARDORROW__CTOR_OFFSET UNITYSDK_OFFSET(0x187C3290)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengePeakRewardORRow_TypeDefinitionIndex = 12270;

	class ChallengePeakRewardORRow : public ::System::Object
	{
	public:
		::System::UInt32 PeakGroupID; // 0x10
		::System::UInt32 ID; // 0x14
		::System::UInt32 RewardID; // 0x18

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKREWARDORROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ChallengePeakRewardORRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengePeakRewardORRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEPEAKREWARDORROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
