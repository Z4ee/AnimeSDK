#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ChallengeGroupType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_CHALLENGEGROUPCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CF842E0)
#define RPG_GAMECORE_CHALLENGEGROUPCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CF84C30)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ChallengeGroupConfigRow_TypeDefinitionIndex = 12859;

	class ChallengeGroupConfigRow : public ::System::Object
	{
	public:
		::System::String* ThemePicPath; // 0x10
		::System::String* TabPicPath; // 0x18
		::System::String* TabPicSelectPath; // 0x20
		::System::String* BackGroundPath; // 0x28
		::System::UInt32 MapEntranceID; // 0x30
		::System::UInt32 MazeBuffID; // 0x34
		::RPG::GameCore::ChallengeGroupType ChallengeGroupType; // 0x38
		::System::UInt32 WorldID; // 0x3C
		::System::UInt32 GroupID; // 0x40
		::System::UInt32 PreMissionID; // 0x44
		::System::UInt32 RewardLineGroupID; // 0x48
		::System::UInt32 MappingInfoID; // 0x4C
		::System::UInt32 ScheduleDataID; // 0x50
		::System::UInt32 TierceID; // 0x54
		::RPG::Client::TextID GroupName; // 0x58

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ChallengeGroupConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ChallengeGroupConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_CHALLENGEGROUPCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
