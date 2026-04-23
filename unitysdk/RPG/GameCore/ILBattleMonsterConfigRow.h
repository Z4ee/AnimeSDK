#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleMonsterRank.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_B34BC0DFAA62C487;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x18A0B800)
#define RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x18A0C0D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleMonsterConfigRow_TypeDefinitionIndex = 13066;

	class ILBattleMonsterConfigRow : public ::System::Object
	{
	public:
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x10
		::System::String* AIPath; // 0x18
		::Il2CppArray<::System::UInt32>* SkillList; // 0x20
		::System::String* IconPath; // 0x28
		::Il2CppArray<::System::String*>* CustomValueTags; // 0x30
		::System::String* JsonConfig; // 0x38
		::Il2CppArray<::System::UInt32>* SummonIDList; // 0x40
		::System::String* PrefabPath; // 0x48
		::System::String* RoundIconPath; // 0x50
		::Il2CppArray<::Class_1_B34BC0DFAA62C487*>* DynamicValues; // 0x58
		::System::Boolean ShowSpecialHpBar; // 0x60
		::RPG::GameCore::ILBattleMonsterRank Rank; // 0x64
		::RPG::GameCore::FixPoint HPBase; // 0x68
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0x70
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0x78
		::System::UInt32 OriginalTemplateID; // 0x80
		::System::UInt32 ID; // 0x84
		::RPG::Client::TextID MonsterName; // 0x88
		::RPG::GameCore::FixPoint AttackBase; // 0x98
		::RPG::GameCore::FixPoint MoveSpeed; // 0xA0
		::RPG::GameCore::FixPoint DefenceBase; // 0xA8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW__CTOR_OFFSET))(this);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* array, ::RPG::GameCore::ILBattleMonsterConfigRow*& val)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::ILBattleMonsterConfigRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW_FROMBINARY_OFFSET))(array, val);
		}
	};
}
