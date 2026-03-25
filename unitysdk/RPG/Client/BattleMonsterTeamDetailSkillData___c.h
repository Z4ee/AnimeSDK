#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::GameCore { class MonsterSkillRowData; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x91C1E30)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C__CTOR_OFFSET UNITYSDK_OFFSET(0x91C1E70)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_0_OFFSET UNITYSDK_OFFSET(0x91C1E80)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_1_OFFSET UNITYSDK_OFFSET(0x91C1EB0)
#define RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_2_OFFSET UNITYSDK_OFFSET(0x91C1F20)

namespace RPG::Client
{
	inline static constexpr unsigned int BattleMonsterTeamDetailSkillData___c_TypeDefinitionIndex = 58995;

	class BattleMonsterTeamDetailSkillData___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::UInt32>** StaticGet___9__2_2()
		{
			return (::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BattleMonsterTeamDetailSkillData___c_TypeDefinitionIndex)->GetStaticField(0x40A30);
		}
		static ::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::Boolean>** StaticGet___9__2_0()
		{
			return (::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(BattleMonsterTeamDetailSkillData___c_TypeDefinitionIndex)->GetStaticField(0x40A38);
		}
		static ::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::UInt32>** StaticGet___9__2_1()
		{
			return (::System::Func_2<::RPG::GameCore::MonsterSkillRowData*, ::System::UInt32>**)Il2CppClass::FromTypeDefinitionIndex(BattleMonsterTeamDetailSkillData___c_TypeDefinitionIndex)->GetStaticField(0x40A40);
		}
		static ::RPG::Client::BattleMonsterTeamDetailSkillData___c** StaticGet___9()
		{
			return (::RPG::Client::BattleMonsterTeamDetailSkillData___c**)Il2CppClass::FromTypeDefinitionIndex(BattleMonsterTeamDetailSkillData___c_TypeDefinitionIndex)->GetStaticField(0x40A48);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C__CTOR_OFFSET))(this);
		}

		::System::Boolean __SortSkills_b__2_0(::RPG::GameCore::MonsterSkillRowData* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::RPG::GameCore::MonsterSkillRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_0_OFFSET))(this, x);
		}

		::System::UInt32 __SortSkills_b__2_1(::RPG::GameCore::MonsterSkillRowData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MonsterSkillRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_1_OFFSET))(this, x);
		}

		::System::UInt32 __SortSkills_b__2_2(::RPG::GameCore::MonsterSkillRowData* x)
		{
			return ((::System::UInt32(*)(::PVOID, ::RPG::GameCore::MonsterSkillRowData*))((::PBYTE)hIl2Cpp + RPG_CLIENT_BATTLEMONSTERTEAMDETAILSKILLDATA___C___SORTSKILLS_B__2_2_OFFSET))(this, x);
		}
	};
}
