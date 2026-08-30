#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEDUNGEONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D19DAD0)
#define RPG_GAMECORE_IDLELIVEDUNGEONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D19E0B0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveDungeonRow_TypeDefinitionIndex = 11714;

	class IdleLiveDungeonRow : public ::System::Object
	{
	public:
		::System::String* BGMState; // 0x10
		::System::String* BossIconPath; // 0x18
		::System::String* BossFigurePath; // 0x20
		::System::String* MonsterFigure; // 0x28
		::Il2CppArray<::RPG::GameCore::ILBattleAvatarTag>* RecommondTagList; // 0x30
		::System::UInt32 ChatPhase; // 0x38
		::System::UInt32 ChestPerHourIncrease; // 0x3C
		::RPG::Client::TextID Desc; // 0x40
		::RPG::Client::TextID Name; // 0x50
		::System::UInt32 MaxHpProgress; // 0x60
		::System::UInt32 RewardID; // 0x64
		::System::UInt32 ID; // 0x68
		::System::UInt32 IncomeHpProgress; // 0x6C
		::System::UInt32 BattleTime; // 0x70
		::System::UInt32 CrystalPerHourIncrease; // 0x74
		::System::UInt32 UnlockChapterIndex; // 0x78
		::System::UInt32 TicketPerHourIncrease; // 0x7C
		::System::UInt32 StageID; // 0x80

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEDUNGEONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::IdleLiveDungeonRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveDungeonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEDUNGEONROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
