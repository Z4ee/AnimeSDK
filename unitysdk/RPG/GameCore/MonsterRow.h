#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/Client/TextID.h"
#include "unitysdk/RPG/GameCore/AetherSpiritType.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/FixPoint.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/System/ValueTuple_3.h"

class Class_1_2EC0EF10CE4B8713;
class Class_1_7A22A3DBEEDD1F80;
class Class_1_B34BC0DFAA62C487;
class Class_1_B7B6A11029867830;
class Class_1_EDD10E908F1C4623;
namespace RPG::GameCore { class AetherDivideMonsterRow; }
namespace RPG::GameCore { class ElementResistanceConfig; }
namespace RPG::GameCore { class MonsterResistEntry; }
namespace System { class String; }

#define RPG_GAMECORE_MONSTERROW_FROMBINARYWITHOUTNEW_OFFSET UNITYSDK_OFFSET(0x1B1C5680)
#define RPG_GAMECORE_MONSTERROW_FROMBINARY_OFFSET UNITYSDK_OFFSET(0x1B1C6410)
#define RPG_GAMECORE_MONSTERROW_FROMTABLEOFFSET_OFFSET UNITYSDK_OFFSET(0x1B1CA300)
#define RPG_GAMECORE_MONSTERROW_GETMONSTERRANK_OFFSET UNITYSDK_OFFSET(0x1B1C77B0)
#define RPG_GAMECORE_MONSTERROW_GET_AETHERDIVIDETYPE_OFFSET UNITYSDK_OFFSET(0x1B1CA3E0)
#define RPG_GAMECORE_MONSTERROW_GET_MONSTERUNIQUEID_OFFSET UNITYSDK_OFFSET(0x1B1CA490)
#define RPG_GAMECORE_MONSTERROW_GET__EXPANDEDDATAROW_OFFSET UNITYSDK_OFFSET(0x1B1CA440)
#define RPG_GAMECORE_MONSTERROW_RESET_OFFSET UNITYSDK_OFFSET(0x1B1CA360)
#define RPG_GAMECORE_MONSTERROW__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1CA3D0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int MonsterRow_TypeDefinitionIndex = 13655;

	class MonsterRow : public ::System::Object
	{
	public:
		::Il2CppArray<::RPG::GameCore::AttackDamageType>* StanceWeakList; // 0x10
		::Il2CppArray<::System::UInt32>* SkillList; // 0x18
		::Il2CppArray<::System::String*>* AbilityNameList; // 0x20
		::Il2CppArray<::RPG::GameCore::MonsterResistEntry*>* DebuffResist; // 0x28
		::Il2CppArray<::System::UInt32>* SummonIDList; // 0x30
		::Il2CppArray<::Class_1_2EC0EF10CE4B8713*>* OverrideAISkillSequence; // 0x38
		::System::String* OverrideAIPath; // 0x40
		::Il2CppArray<::RPG::GameCore::ElementResistanceConfig*>* DamageTypeResistance; // 0x48
		::Il2CppArray<::System::String*>* CustomValueTags; // 0x50
		::Il2CppArray<::Class_1_EDD10E908F1C4623*>* CustomValues; // 0x58
		::RPG::GameCore::AetherDivideMonsterRow* _ExpandedDataRowCache; // 0x60
		::Il2CppArray<::Class_1_B34BC0DFAA62C487*>* DynamicValues; // 0x68
		::Il2CppArray<::RPG::Client::TextID>* MonsterStrategy; // 0x70
		::Il2CppArray<::Class_1_B7B6A11029867830*>* OverrideSkillParams; // 0x78
		::RPG::Client::TextID MonsterName; // 0x80
		::RPG::GameCore::FixPoint AttackModifyRatio; // 0x90
		::RPG::GameCore::FixPoint StanceModifyValue; // 0x98
		::RPG::GameCore::FixPoint HPModifyValue; // 0xA0
		::System::Boolean _IsCached; // 0xA8
		::System::UInt32 EliteGroup; // 0xAC
		::RPG::GameCore::FixPoint DefenceModifyValue; // 0xB0
		::System::UInt32 MonsterID; // 0xB8
		::System::UInt32 Level; // 0xBC
		::RPG::GameCore::FixPoint SpeedModifyRatio; // 0xC0
		::RPG::Client::TextID MonsterIntroduction; // 0xC8
		::RPG::GameCore::FixPoint DefenceModifyRatio; // 0xD8
		::System::UInt32 MonsterType; // 0xE0
		::System::Int32 StanceCountDelta; // 0xE4
		::System::UInt32 MonsterTemplateID; // 0xE8
		::System::UInt32 HardLevelGroup; // 0xEC
		::RPG::GameCore::FixPoint AttackModifyValue; // 0xF0
		::RPG::GameCore::FixPoint HPModifyRatio; // 0xF8
		::RPG::Client::TextID MonsterBattleIntroduction; // 0x100
		::RPG::GameCore::FixPoint StanceModifyRatio; // 0x110
		::RPG::GameCore::FixPoint SpeedModifyValue; // 0x118

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW__CTOR_OFFSET))(this);
		}

		::System::Void FromTableOffset(::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte> a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::ValueTuple_3<::System::Int32, ::System::Int32, ::System::Byte>))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_FROMTABLEOFFSET_OFFSET))(this, a1);
		}

		::System::Void Reset()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_RESET_OFFSET))(this);
		}

		static ::System::Void FromBinaryWithoutNew(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterRow* a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterRow*))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_FROMBINARYWITHOUTNEW_OFFSET))(a1, a2);
		}

		static ::System::Void FromBinary(::Class_1_7A22A3DBEEDD1F80* a1, ::RPG::GameCore::MonsterRow*& a2)
		{
			return ((::System::Void(*)(::Class_1_7A22A3DBEEDD1F80*, ::RPG::GameCore::MonsterRow*&))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_FROMBINARY_OFFSET))(a1, a2);
		}

		::RPG::GameCore::AetherSpiritType get_AetherDivideType()
		{
			return ((::RPG::GameCore::AetherSpiritType(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GET_AETHERDIVIDETYPE_OFFSET))(this);
		}

		::System::UInt32 get_MonsterUniqueID()
		{
			return ((::System::UInt32(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GET_MONSTERUNIQUEID_OFFSET))(this);
		}

		::RPG::GameCore::AetherDivideMonsterRow* get__ExpandedDataRow()
		{
			return ((::RPG::GameCore::AetherDivideMonsterRow*(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GET__EXPANDEDDATAROW_OFFSET))(this);
		}

		::RPG::GameCore::MonsterRank GetMonsterRank()
		{
			return ((::RPG::GameCore::MonsterRank(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_GAMECORE_MONSTERROW_GETMONSTERRANK_OFFSET))(this);
		}
	};
}
