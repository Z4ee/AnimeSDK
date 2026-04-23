#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;

#define RPG_GAMECORE_FIGHTFESTSTAGEINFOROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x188E27C0)
#define RPG_GAMECORE_FIGHTFESTSTAGEINFOROW__CTOR_OFFSET UNITYSDK_OFFSET(0x188E3190)

namespace RPG::GameCore
{
	inline static constexpr unsigned int FightFestStageInfoRow_TypeDefinitionIndex = 12556;

	class FightFestStageInfoRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* RecommadCoachID; // 0x10
		::Il2CppArray<::System::UInt32>* PreviewMonsterList; // 0x18
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x20
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommadNature; // 0x28
		::RPG::Client::TextID ChallengeName; // 0x30
		::RPG::Client::TextID HighLightDesc; // 0x40
		::System::UInt32 UIEnterBattleAreaID; // 0x50
		::System::UInt32 TutorialID; // 0x54
		::RPG::Client::TextID EnvironmentBuffDes; // 0x58
		::RPG::Client::TextID EnvironmentBuffName; // 0x68
		::System::UInt32 EventID; // 0x78
		::System::UInt32 EnvironmentBuffID; // 0x7C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::FightFestStageInfoRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::FightFestStageInfoRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_FIGHTFESTSTAGEINFOROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
