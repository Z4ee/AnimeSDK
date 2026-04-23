#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1861B940)
#define RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1861BE80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFindTrotterConfigRow_TypeDefinitionIndex = 11051;

	class ActivityFindTrotterConfigRow : public ::System::Object
	{
	public:
		::System::UInt32 FinishSubMissionID; // 0x10
		::System::UInt32 Order; // 0x14
		::RPG::Client::TextID Result01; // 0x18
		::RPG::Client::TextID Aim02; // 0x28
		::RPG::Client::TextID Title; // 0x38
		::System::UInt32 MissionID; // 0x48
		::RPG::Client::TextID Aim01; // 0x50
		::System::UInt32 ActivityModuleID; // 0x60
		::System::UInt32 StartSubMissionID; // 0x64
		::RPG::Client::TextID Result02; // 0x68
		::System::UInt32 RewardQuestID; // 0x78
		::System::UInt32 ActivityID; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivityFindTrotterConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFindTrotterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFINDTROTTERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
