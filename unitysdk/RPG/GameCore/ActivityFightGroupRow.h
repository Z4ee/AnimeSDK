#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYFIGHTGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1AAF3AB0)
#define RPG_GAMECORE_ACTIVITYFIGHTGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1AAF4360)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityFightGroupRow_TypeDefinitionIndex = 11195;

	class ActivityFightGroupRow : public ::System::Object
	{
	public:
		::System::String* ActivityFightGroupIconPath; // 0x10
		::RPG::Client::TextID FightStageLimitDesc; // 0x18
		::System::UInt32 BattleAreaID; // 0x28
		::System::UInt32 PlaneID; // 0x2C
		::RPG::Client::TextID FightStageTitle; // 0x30
		::System::UInt32 BattleAreaGroupID; // 0x40
		::System::UInt32 FloorID; // 0x44
		::RPG::Client::TextID FightStageDesc; // 0x48
		::System::UInt32 ActivityFightGroupID; // 0x58
		::System::UInt32 SpecialAvatarID; // 0x5C

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
