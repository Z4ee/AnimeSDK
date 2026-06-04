#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_ACTIVITYTELEVISIONLEVELROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x19407910)
#define RPG_GAMECORE_ACTIVITYTELEVISIONLEVELROW__CTOR_OFFSET UNITYSDK_OFFSET(0x19408390)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ActivityTelevisionLevelRow_TypeDefinitionIndex = 11897;

	class ActivityTelevisionLevelRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SpecialAvatarList; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* TargetTextList; // 0x18
		::Il2CppArray<::System::UInt32>* MazeBuffMulList; // 0x20
		::System::String* MonsterPic; // 0x28
		::Il2CppArray<::System::UInt32>* AllMonsterList; // 0x30
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* RecommadNature; // 0x38
		::Il2CppArray<::System::UInt32>* PreTelevisionList; // 0x40
		::Il2CppArray<::System::UInt32>* ExtraInfoMonsterIDList; // 0x48
		::Il2CppArray<::System::Single>* MonsterParmList; // 0x50
		::Il2CppArray<::System::UInt32>* MonsterList; // 0x58
		::Il2CppArray<::System::UInt32>* BuffShowLevelList; // 0x60
		::Il2CppArray<::System::Single>* ParmList; // 0x68
		::Il2CppArray<::System::UInt32>* AvailableBuffList; // 0x70
		::System::UInt32 ExtraInfoMonsterWave; // 0x78
		::System::UInt32 FirstMonsterWave; // 0x7C
		::RPG::Client::TextID MonsterBuffDesc; // 0x80
		::System::UInt32 MazeBuffID; // 0x90
		::System::UInt32 BuffCount; // 0x94
		::RPG::Client::TextID BuffTips; // 0x98
		::RPG::Client::TextID BuffShortDesc; // 0xA8
		::System::UInt32 ExtraEffectID; // 0xB8
		::System::UInt32 UIEnterBattleAreaID; // 0xBC
		::RPG::Client::TextID MonsterBuffTips; // 0xC0
		::RPG::Client::TextID BuffDesc; // 0xD0
		::System::UInt32 EventID; // 0xE0
		::System::UInt32 TelevisionID; // 0xE4
		::RPG::Client::TextID MonsterBuffShortDesc; // 0xE8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONLEVELROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ActivityTelevisionLevelRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ActivityTelevisionLevelRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ACTIVITYTELEVISIONLEVELROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
