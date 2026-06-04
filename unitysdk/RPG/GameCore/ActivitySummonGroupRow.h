#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x194063F0)
#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19406D70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonGroupRow_TypeDefinitionIndex = 11831;

	class ActivitySummonGroupRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::Il2CppArray<::System::UInt32>* MonsterSkillList; // 0x18
		::Il2CppArray<::RPG::Client::TextID>* MonsterSkillDescList; // 0x20
		::System::String* MonsterMiddleIcon; // 0x28
		::System::String* OriginalMiniImagePath; // 0x30
		::System::String* MonsterImagePath; // 0x38
		::Il2CppArray<::System::UInt32>* AvatarSkillList; // 0x40
		::System::String* OriginalImagePath; // 0x48
		::Il2CppArray<::System::String*>* MasterImagePath; // 0x50
		::System::String* MiniImagePath; // 0x58
		::Il2CppArray<::System::String*>* BackgroundTrashImageList; // 0x60
		::System::UInt32 EntranceID; // 0x68
		::System::UInt32 ActivityModuleID; // 0x6C
		::RPG::Client::TextID StageName; // 0x70
		::RPG::Client::TextID Desc; // 0x80
		::RPG::Client::TextID OriginalStageName; // 0x90
		::System::UInt32 MappingInfo; // 0xA0
		::System::UInt32 MonsterEventID; // 0xA4
		::RPG::Client::TextID OriginalDesc; // 0xA8
		::RPG::Client::TextID MonsterDesc; // 0xB8
		::RPG::Client::TextID MonsterName; // 0xC8
		::System::UInt32 SubMissionID; // 0xD8
		::System::UInt32 GotoID; // 0xDC
		::System::UInt32 GroupID; // 0xE0
		::System::UInt32 MazeBuffID; // 0xE4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONGROUPROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivitySummonGroupRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivitySummonGroupRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
