#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AvatarDemoStageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_AVATARDEMOCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D40E580)
#define RPG_GAMECORE_AVATARDEMOCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D40F1B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AvatarDemoConfigRow_TypeDefinitionIndex = 12777;

	class AvatarDemoConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* ConfigList1; // 0x10
		::Il2CppArray<::System::UInt32>* NpcMonsterIDList1; // 0x18
		::Il2CppArray<::System::UInt32>* TrialAvatarList; // 0x20
		::Il2CppArray<::System::UInt32>* EventIDList1; // 0x28
		::Il2CppArray<::System::String*>* OverrideDisplaySkillTriggerKeyList; // 0x30
		::System::String* OperationRecordPath; // 0x38
		::Il2CppArray<::System::UInt32>* SPList; // 0x40
		::System::UInt32 MapEntranceID; // 0x48
		::RPG::GameCore::AvatarDemoStageType StageType; // 0x4C
		::System::UInt32 RandomSeed; // 0x50
		::System::UInt32 MazeGroupID1; // 0x54
		::System::Boolean NormalWaveNotShowDetail; // 0x58
		::System::Boolean EnableMazeSkillEffect; // 0x59
		::System::Boolean EnableSwitchAvatar; // 0x5A
		::RPG::Client::TextID AvatarDemoTitle; // 0x60
		::System::UInt32 AvatarID; // 0x70
		::System::UInt32 RaidID; // 0x74
		::RPG::Client::TextID AvatarDemoGuide; // 0x78
		::System::UInt32 ScoringGroupID; // 0x88
		::System::UInt32 StageID; // 0x8C
		::System::UInt32 RewardID; // 0x90
		::System::UInt32 GuideGroupID; // 0x94

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::AvatarDemoConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::AvatarDemoConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_AVATARDEMOCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
