#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/Struct_2_A98C406BD653F8E9.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_ADDGLOBALWEAKNESS_1_OFFSET UNITYSDK_OFFSET(0xB58EEB0)
#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_ADDGLOBALWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB58ED50)
#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_CHECKHASGLOBALWEAKNESS_1_OFFSET UNITYSDK_OFFSET(0xB58F110)
#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_CHECKHASGLOBALWEAKNESS_OFFSET UNITYSDK_OFFSET(0xB58F040)
#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_GETGLOBALWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0xB58EDB0)
#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_GETWEAKNESSFORBATTLEMONSTER_OFFSET UNITYSDK_OFFSET(0xB58EC40)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureNpcMonsterWeaknessHelp_TypeDefinitionIndex = 52528;

	class AdventureNpcMonsterWeaknessHelp : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::AttackDamageType>* GetWeaknessForBattleMonster(::System::UInt32 battleMonsterID)
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_GETWEAKNESSFORBATTLEMONSTER_OFFSET))(battleMonsterID);
		}

		static ::Il2CppArray<::RPG::GameCore::AttackDamageType>* AddGlobalWeakness(::Il2CppArray<::RPG::GameCore::AttackDamageType>* baseWeakness, ::RPG::GameCore::MonsterRank rank)
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::Il2CppArray<::RPG::GameCore::AttackDamageType>*, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_ADDGLOBALWEAKNESS_OFFSET))(baseWeakness, rank);
		}

		static ::System::Boolean CheckHasGlobalWeakness(::RPG::GameCore::AttackDamageType weakness, ::RPG::GameCore::MonsterRank rank)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_CHECKHASGLOBALWEAKNESS_OFFSET))(weakness, rank);
		}

		static ::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* GetGlobalWeaknessList()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_GETGLOBALWEAKNESSLIST_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::AttackDamageType>* AddGlobalWeakness_1(::Il2CppArray<::RPG::GameCore::AttackDamageType>* baseWeakness, ::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* globalWeaknessDatas, ::RPG::GameCore::MonsterRank rank)
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::Il2CppArray<::RPG::GameCore::AttackDamageType>*, ::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_ADDGLOBALWEAKNESS_1_OFFSET))(baseWeakness, globalWeaknessDatas, rank);
		}

		static ::System::Boolean CheckHasGlobalWeakness_1(::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* globalWeaknessDatas, ::RPG::GameCore::AttackDamageType weakness, ::RPG::GameCore::MonsterRank rank)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_CHECKHASGLOBALWEAKNESS_1_OFFSET))(globalWeaknessDatas, weakness, rank);
		}
	};
}
