#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYFIGHTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CA056B0)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA05F60)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFightGroupRow_TypeDefinitionIndex = 11584;

	class ActivityFightGroupRow : public ::System::Object
	{
	public:
		::System::String* ActivityFightGroupIconPath; // 0x10
		::System::UInt32 FloorID; // 0x18
		::System::UInt32 BattleAreaID; // 0x1C
		::RPG::Client::TextID FightStageLimitDesc; // 0x20
		::System::UInt32 PlaneID; // 0x30
		::System::UInt32 BattleAreaGroupID; // 0x34
		::RPG::Client::TextID FightStageTitle; // 0x38
		::System::UInt32 SpecialAvatarID; // 0x48
		::System::UInt32 ActivityFightGroupID; // 0x4C
		::RPG::Client::TextID FightStageDesc; // 0x50

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityFightGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityFightGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYFIGHTGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
