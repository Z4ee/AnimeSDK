#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/ILBattleAvatarTag.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_IDLELIVEDUNGEONROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0F490)
#define RPG_GAMECORE_IDLELIVEDUNGEONROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0FAC0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int IdleLiveDungeonRow_TypeDefinitionIndex = 11177;

	class IdleLiveDungeonRow : public ::System::Object
	{
	public:
		::System::String* BossFigurePath; // 0x10
		::Il2CppArray<::RPG::GameCore::ILBattleAvatarTag>* RecommondTagList; // 0x18
		::System::String* MonsterFigure; // 0x20
		::System::String* BGMState; // 0x28
		::System::String* BossIconPath; // 0x30
		::System::UInt32 ChatPhase; // 0x38
		::System::UInt32 BattleTime; // 0x3C
		::System::UInt32 UnlockChapterIndex; // 0x40
		::System::UInt32 MaxHpProgress; // 0x44
		::System::UInt32 TicketPerHourIncrease; // 0x48
		::System::UInt32 ID; // 0x4C
		::System::UInt32 RewardID; // 0x50
		::RPG::Client::TextID Name; // 0x58
		::System::UInt32 StageID; // 0x68
		::System::UInt32 IncomeHpProgress; // 0x6C
		::System::UInt32 CrystalPerHourIncrease; // 0x70
		::System::UInt32 ChestPerHourIncrease; // 0x74
		::RPG::Client::TextID Desc; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEDUNGEONROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::IdleLiveDungeonRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::IdleLiveDungeonRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_IDLELIVEDUNGEONROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
