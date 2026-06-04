#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIGHTFESTSTAGEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1971EF80)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1971F910)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestStageInfoRow_TypeDefinitionIndex = 12649;

	class FightFestStageInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommadNature; // 0x10
		::Il2CppArray<::System::UInt32>* RecommadCoachID; // 0x18
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x20
		::Il2CppArray<::System::UInt32>* PreviewMonsterList; // 0x28
		::System::UInt32 TutorialID; // 0x30
		::System::UInt32 UIEnterBattleAreaID; // 0x34
		::RPG::Client::TextID HighLightDesc; // 0x38
		::RPG::Client::TextID EnvironmentBuffName; // 0x48
		::RPG::Client::TextID EnvironmentBuffDes; // 0x58
		::System::UInt32 EventID; // 0x68
		::System::UInt32 EnvironmentBuffID; // 0x6C
		::RPG::Client::TextID ChallengeName; // 0x70

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::FightFestStageInfoRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestStageInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
