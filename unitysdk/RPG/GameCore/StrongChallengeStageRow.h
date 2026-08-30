#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/StrongChallengeBattleType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_STRONGCHALLENGESTAGEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D576F70)
#define RPG_GAMECORE_STRONGCHALLENGESTAGEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D577B80)

namespace RPG::GameCore
{
	inline static constexpr unsigned int StrongChallengeStageRow_TypeDefinitionIndex = 12311;

	class StrongChallengeStageRow : public ::System::Object
	{
	public:
		::System::String* MonsterBgFigurePath; // 0x10
		::Il2CppArray<::System::UInt32>* ScoreInterval; // 0x18
		::System::String* MonsterGrayFigurePath; // 0x20
		::Il2CppArray<::System::UInt32>* RecommendAvatar; // 0x28
		::Il2CppArray<::System::UInt32>* SpecialAvatarIDList; // 0x30
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommendNature; // 0x38
		::Il2CppArray<::System::UInt32>* AvailableBuffList; // 0x40
		::Il2CppArray<::System::UInt32>* QuestList; // 0x48
		::Il2CppArray<::System::UInt32>* BossDetailList; // 0x50
		::System::String* MonsterFigurePath; // 0x58
		::System::UInt32 PreStageID; // 0x60
		::System::UInt32 ActivityModuleID; // 0x64
		::System::UInt32 EventID; // 0x68
		::System::UInt32 PlaneID; // 0x6C
		::RPG::GameCore::StrongChallengeBattleType BattleType; // 0x70
		::System::UInt32 BattleAreaID; // 0x74
		::System::UInt32 ClearScoreLine; // 0x78
		::System::UInt32 QuestGroupID; // 0x7C
		::System::UInt32 StrongChallengeStageID; // 0x80
		::System::UInt32 BattleAreaGroupID; // 0x84
		::RPG::Client::TextID Name; // 0x88
		::System::UInt32 FloorID; // 0x98
		::System::UInt32 CostLimit; // 0x9C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::StrongChallengeStageRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::StrongChallengeStageRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_STRONGCHALLENGESTAGEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
