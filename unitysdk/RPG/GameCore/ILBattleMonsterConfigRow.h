#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/ILBattleMonsterRank.h"
#include "unitysdk/System/Object.h"

class Class_1_7A22A3DBEEDD1F80;
class Class_1_B34BC0DFAA62C487;
namespace System { class String; }

#define RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B690370)
#define RPG_GAMECORE_ILBATTLEMONSTERCONFIGROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B690C20)

namespace RPG::GameCore
{
	inline static constexpr unsigned int ILBattleMonsterConfigRow_TypeDefinitionIndex = 13295;

	class ILBattleMonsterConfigRow : public ::System::Object
	{
	public:
		::System::String* RoundIconPath; // 0x10
		::Il2CppArray<::System::String*>* CustomValueTags; // 0x18
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x20
		::Il2CppArray<::System::UInt32>* SkillList; // 0x28
		::Il2CppArray<::System::UInt32>* SummonIDList; // 0x30
		::Il2CppArray<::Class_1_B34BC0DFAA62C487*>* DynamicValues; // 0x38
		::System::String* JsonConfig; // 0x40
		::System::String* AIPath; // 0x48
		::System::String* IconPath; // 0x50
		::System::String* PrefabPath; // 0x58
		::RPG::GameCore::FixPoint AttackBase; // 0x60
		::RPG::GameCore::FixPoint HPBase; // 0x68
		::System::UInt32 ID; // 0x70
		::RPG::GameCore::ILBattleMonsterRank Rank; // 0x74
		::RPG::GameCore::FixPoint CriticalChanceBase; // 0x78
		::RPG::Client::TextID MonsterName; // 0x80
		::RPG::GameCore::FixPoint DefenceBase; // 0x90
		::RPG::GameCore::FixPoint CriticalDamageBase; // 0x98
		::RPG::GameCore::FixPoint MoveSpeed; // 0xA0
		::System::Boolean ShowSpecialHpBar; // 0xA8
		::System::UInt32 OriginalTemplateID; // 0xAC

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
