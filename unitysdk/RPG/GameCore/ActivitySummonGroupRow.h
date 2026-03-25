#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x16F15DB0)
#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x16F16760)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonGroupRow_TypeDefinitionIndex = 11332;

	class ActivitySummonGroupRow : public ::System::Object
	{
	public:
		::System::String* MonsterImagePath; // 0x10
		::System::String* OriginalMiniImagePath; // 0x18
		::System::String* ImagePath; // 0x20
		::Il2CppArray<::System::UInt32>* MonsterSkillList; // 0x28
		::System::String* OriginalImagePath; // 0x30
		::Il2CppArray<::System::String*>* BackgroundTrashImageList; // 0x38
		::System::String* MonsterMiddleIcon; // 0x40
		::System::String* MiniImagePath; // 0x48
		::Il2CppArray<::System::UInt32>* AvatarSkillList; // 0x50
		::Il2CppArray<::System::String*>* MasterImagePath; // 0x58
		::Il2CppArray<::RPG::Client::TextID>* MonsterSkillDescList; // 0x60
		::RPG::Client::TextID StageName; // 0x68
		::RPG::Client::TextID Desc; // 0x78
		::System::UInt32 GotoID; // 0x88
		::System::UInt32 ActivityModuleID; // 0x8C
		::System::UInt32 GroupID; // 0x90
		::System::UInt32 MappingInfo; // 0x94
		::RPG::Client::TextID OriginalDesc; // 0x98
		::RPG::Client::TextID MonsterDesc; // 0xA8
		::System::UInt32 EntranceID; // 0xB8
		::System::UInt32 MazeBuffID; // 0xBC
		::System::UInt32 MonsterEventID; // 0xC0
		::System::UInt32 SubMissionID; // 0xC4
		::RPG::Client::TextID OriginalStageName; // 0xC8
		::RPG::Client::TextID MonsterName; // 0xD8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ActivitySummonGroupRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivitySummonGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
