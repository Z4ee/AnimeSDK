#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18634830)
#define RPG_GAMECORE_ACTIVITYREWARDROGUEENDLESSROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18634E50)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityRewardRogueEndlessRow_TypeDefinitionIndex = 11665;

	class ActivityRewardRogueEndlessRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardID; // 0x10
		::System::UInt32 RewardLevel; // 0x14
		::System::UInt32 RewardPoint; // 0x18
		::RPG::Client::TextID RewardLevelName; // 0x20

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
