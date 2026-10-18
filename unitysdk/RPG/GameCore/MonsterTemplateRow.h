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

#define RPG_GAMECORE_MONSTERTEMPLATEROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D88D1A0)
#define RPG_GAMECORE_MONSTERTEMPLATEROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D88E3C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterTemplateRow_TypeDefinitionIndex = 14177;

	class MonsterTemplateRow : public ::System::Object
	{
	public:
		::System::String* ImagePath; // 0x10
		::Il2CppArray<::RPG::Client::TextID>* MonsterStrategy; // 0x18
		::System::String* ManikinImagePath; // 0x20
		::System::String* PrefabPath; // 0x28
		::Il2CppArray<::System::UInt32>* NPCMonsterList; // 0x30
		::System::String* JsonConfig; // 0x38
		::System::String* ManikinPrefabPath; // 0x40
		::System::String* ManikinConfigPath; // 0x48
		::System::String* IconPath; // 0x50
		::System::String* AIPath; // 0x58
		::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>* AISkillSequence; // 0x60
		::System::String* RoundIconPath; // 0x68
		::System::Int32 StanceCount; // 0x70
		::RPG::GameCore::AttackDamageType StanceType; // 0x74
		::RPG::GameCore::FixPoint StanceBase; // 0x78
		::RPG::Client::TextID MonsterName; // 0x80
		::RPG::GameCore::FixPoint SpeedModifyValue; // 0x90
		::RPG::GameCore::FixPoint HPBase; // 0x98
		::RPG::GameCore::FixPoint DefenceBase; // 0xA0
		::RPG::GameCore::FixPoint SpeedBase; // 0xA8
		::RPG::GameCore::MonsterRank Rank; // 0xB0
		::System::Int32 AtlasSortID; // 0xB4
		::System::UInt32 TemplateGroupID; // 0xB8
		::System::UInt32 NatureID; // 0xBC
		::RPG::GameCore::FixPoint MinimumFatigueRatio; // 0xC0
		::RPG::GameCore::FixPoint StatusResistanceBase; // 0xC8
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0xD0
		::System::UInt32 MonsterTemplateID; // 0xD8
		::System::UInt32 MonsterCampID; // 0xDC
		::RPG::GameCore::FixPoint AttackBase; // 0xE0
		::RPG::GameCore::FixPoint StanceModifyValue; // 0xE8
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0xF0
		::RPG::GameCore::FixPoint InitialDelayRatio; // 0xF8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterTemplateRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterTemplateRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERTEMPLATEROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
