#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x186284C0)
#define RPG_GAMECORE_ACTIVITYPUNKLORDREWARDROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18628BA0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityPunkLordRewardRow_TypeDefinitionIndex = 11622;

	class ActivityPunkLordRewardRow : public ::System::Object
	{
	public:
		::System::UInt32 RewardPoint; // 0x10
		::System::UInt32 RewardLevel; // 0x14
		::System::UInt32 RewardID; // 0x18
		::RPG::Client::TextID RewardLevelName; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityPunkLordRewardRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityPunkLordRewardRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYPUNKLORDREWARDROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
