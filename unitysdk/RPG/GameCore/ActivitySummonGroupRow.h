#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D3524F0)
#define RPG_GAMECORE_ACTIVITYSUMMONGROUPROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D352E70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivitySummonGroupRow_TypeDefinitionIndex = 12406;

	class ActivitySummonGroupRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::Client::TextID>* MonsterSkillDescList; // 0x10
		::System::String* MiniImagePath; // 0x18
		::System::String* MonsterMiddleIcon; // 0x20
		::System::String* ImagePath; // 0x28
		::Il2CppArray<::System::String*>* BackgroundTrashImageList; // 0x30
		::Il2CppArray<::System::UInt32>* AvatarSkillList; // 0x38
		::Il2CppArray<::System::String*>* MasterImagePath; // 0x40
		::System::String* OriginalImagePath; // 0x48
		::Il2CppArray<::System::UInt32>* MonsterSkillList; // 0x50
		::System::String* MonsterImagePath; // 0x58
		::System::String* OriginalMiniImagePath; // 0x60
		::System::UInt32 MonsterEventID; // 0x68
		::System::UInt32 MazeBuffID; // 0x6C
		::RPG::Client::TextID Desc; // 0x70
		::System::UInt32 GotoID; // 0x80
		::System::UInt32 ActivityModuleID; // 0x84
		::System::UInt32 SubMissionID; // 0x88
		::System::UInt32 EntranceID; // 0x8C
		::RPG::Client::TextID StageName; // 0x90
		::RPG::Client::TextID MonsterName; // 0xA0
		::RPG::Client::TextID OriginalStageName; // 0xB0
		::RPG::Client::TextID MonsterDesc; // 0xC0
		::RPG::Client::TextID OriginalDesc; // 0xD0
		::System::UInt32 GroupID; // 0xE0
		::System::UInt32 MappingInfo; // 0xE4

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
