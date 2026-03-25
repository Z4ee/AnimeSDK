#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F134B0)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F13AD0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRewardRogueEndlessRow_TypeDefinitionIndex = 11262;

	class ActivityRewardRogueEndlessRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardLevel; // 0x10
		::RPG::Client::TextID RewardLevelName; // 0x18
		::System::UInt32 RewardID; // 0x28
		::System::UInt32 RewardPoint; // 0x2C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityRewardRogueEndlessRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityRewardRogueEndlessRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
