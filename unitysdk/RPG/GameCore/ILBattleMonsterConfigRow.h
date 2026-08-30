#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleMonsterRank.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_B34BC0DFAA62C487;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1D20B4C0)
#define RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1D20BD70)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleMonsterConfigRow_TypeDefinitionIndex = 13686;

	class ILBattleMonsterConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::UInt32>* SkillList; // 0x10
		::System::String* RoundIconPath; // 0x18
		::System::String* JsonConfig; // 0x20
		::System::String* AIPath; // 0x28
		::Il2CppArray<::System::UInt32>* SummonIDList; // 0x30
		::System::String* IconPath; // 0x38
		::System::String* PrefabPath; // 0x40
		::Il2CppArray<::System::String*>* CustomValueTags; // 0x48
		::Il2CppArray<::Class_1_B34BC0DFAA62C487*>* DynamicValues; // 0x50
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x58
		::RPG::GameCore::FixPoint HPBase; // 0x60
		::RPG::GameCore::FixPoint DefenceBase; // 0x68
		::RPG::GameCore::FixPoint MoveSpeed; // 0x70
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0x78
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0x80
		::RPG::Client::TextID MonsterName; // 0x88
		::RPG::GameCore::FixPoint AttackBase; // 0x98
		::System::Boolean ShowSpecialHpBar; // 0xA0
		::System::UInt32 OriginalTemplateID; // 0xA4
		::RPG::GameCore::ILBattleMonsterRank Rank; // 0xA8
		::System::UInt32 ID; // 0xAC

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::ILBattleMonsterConfigRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleMonsterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW_FROMBINARY_OFFSET))(a1, a2);
		}
	};
}
