#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"

class Class_1_2EC0EF10CE4B8713;
class Class_1_7A22A3DBEEDD1F80;
namespace System { class String; }

#define RPG_GAMECORE_MONSTERTEMPLATEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x17455420)
#define RPG_GAMECORE_MONSTERTEMPLATEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x17456640)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterTemplateRow_TypeDefinitionIndex = 12972;

	class MonsterTemplateRow : public ::System::Object
	{
	public:
		::System::String* JsonConfig; // 0x10
		::System::String* ManikinImagePath; // 0x18
		::System::String* ImagePath; // 0x20
		::System::String* IconPath; // 0x28
		::Il2CppArray<::System::UInt32>* NPCMonsterList; // 0x30
		::System::String* RoundIconPath; // 0x38
		::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>* AISkillSequence; // 0x40
		::System::String* ManikinPrefabPath; // 0x48
		::System::String* AIPath; // 0x50
		::System::String* PrefabPath; // 0x58
		::Il2CppArray<::RPG::Client::TextID>* MonsterStrategy; // 0x60
		::System::String* ManikinConfigPath; // 0x68
		::RPG::GameCore::FixPoint HPBase; // 0x70
		::RPG::GameCore::AttackDamageType StanceType; // 0x78
		::System::Int32 AtlasSortID; // 0x7C
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0x80
		::RPG::GameCore::FixPoint InitialDelayRatio; // 0x88
		::RPG::GameCore::FixPoint DefenceBase; // 0x90
		::RPG::GameCore::FixPoint StanceModifyValue; // 0x98
		::System::UInt32 MonsterCampID; // 0xA0
		::System::UInt32 TemplateGroupID; // 0xA4
		::RPG::GameCore::FixPoint StatusResistanceBase; // 0xA8
		::RPG::GameCore::FixPoint AttackBase; // 0xB0
		::RPG::GameCore::FixPoint StanceBase; // 0xB8
		::RPG::Client::TextID MonsterName; // 0xC0
		::RPG::GameCore::MonsterRank Rank; // 0xD0
		::System::UInt32 NatureID; // 0xD4
		::RPG::GameCore::FixPoint MinimumFatigueRatio; // 0xD8
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0xE0
		::RPG::GameCore::FixPoint SpeedBase; // 0xE8
		::RPG::GameCore::FixPoint SpeedModifyValue; // 0xF0
		::System::UInt32 MonsterTemplateID; // 0xF8
		::System::Int32 StanceCount; // 0xFC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::MonsterTemplateRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterTemplateRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
