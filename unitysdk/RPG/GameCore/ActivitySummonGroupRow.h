#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D37FFC0)
#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D380940)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonGroupRow_TypeDefinitionIndex = 12406;

	class ActivitySummonGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* MonsterSkillList; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* MonsterSkillDescList; // 0x18
		::System::String* OriginalMiniImagePath; // 0x20
		::Il2CppArray<::System::String*>* BackgroundTrashImageList; // 0x28
		::System::String* ImagePath; // 0x30
		::System::String* MiniImagePath; // 0x38
		::System::String* MonsterMiddleIcon; // 0x40
		::Il2CppArray<::System::String*>* MasterImagePath; // 0x48
		::System::String* MonsterImagePath; // 0x50
		::Il2CppArray<::System::UInt32>* AvatarSkillList; // 0x58
		::System::String* OriginalImagePath; // 0x60
		::System::UInt32 ActivityModuleID; // 0x68
		::System::UInt32 MonsterEventID; // 0x6C
		::RPG::Client::TextID MonsterName; // 0x70
		::RPG::Client::TextID OriginalDesc; // 0x80
		::System::UInt32 MazeBuffID; // 0x90
		::System::UInt32 MappingInfo; // 0x94
		::RPG::Client::TextID OriginalStageName; // 0x98
		::System::UInt32 SubMissionID; // 0xA8
		::System::UInt32 GroupID; // 0xAC
		::RPG::Client::TextID MonsterDesc; // 0xB0
		::RPG::Client::TextID Desc; // 0xC0
		::RPG::Client::TextID StageName; // 0xD0
		::System::UInt32 GotoID; // 0xE0
		::System::UInt32 EntranceID; // 0xE4

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
