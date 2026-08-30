#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1CDAAF10)
#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1CDAB890)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonGroupRow_TypeDefinitionIndex = 12320;

	class ActivitySummonGroupRow : public ::System::Object
	{
	public:
		::System::String* MiniImagePath; // 0x10
		::System::String* MonsterImagePath; // 0x18
		::System::String* OriginalMiniImagePath; // 0x20
		::System::String* MonsterMiddleIcon; // 0x28
		::Il2CppArray<::RPG::Client::TextID>* MonsterSkillDescList; // 0x30
		::System::String* ImagePath; // 0x38
		::System::String* OriginalImagePath; // 0x40
		::Il2CppArray<::System::String*>* BackgroundTrashImageList; // 0x48
		::Il2CppArray<::System::String*>* MasterImagePath; // 0x50
		::Il2CppArray<::System::UInt32>* AvatarSkillList; // 0x58
		::Il2CppArray<::System::UInt32>* MonsterSkillList; // 0x60
		::System::UInt32 EntranceID; // 0x68
		::System::UInt32 GotoID; // 0x6C
		::RPG::Client::TextID StageName; // 0x70
		::RPG::Client::TextID MonsterDesc; // 0x80
		::RPG::Client::TextID MonsterName; // 0x90
		::System::UInt32 ActivityModuleID; // 0xA0
		::System::UInt32 GroupID; // 0xA4
		::RPG::Client::TextID OriginalStageName; // 0xA8
		::System::UInt32 MazeBuffID; // 0xB8
		::System::UInt32 MappingInfo; // 0xBC
		::System::UInt32 MonsterEventID; // 0xC0
		::System::UInt32 SubMissionID; // 0xC4
		::RPG::Client::TextID Desc; // 0xC8
		::RPG::Client::TextID OriginalDesc; // 0xD8

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
