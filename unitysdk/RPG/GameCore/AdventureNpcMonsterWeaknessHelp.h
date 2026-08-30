#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/RPG/GameCore/AttackDamageType.h"
#include "unitysdk/RPG/GameCore/MonsterRank.h"
#include "unitysdk/Struct_2_A98C406BD653F8E9.h"
#include "unitysdk/System/Object.h"

namespace System::Collections::Generic { template <typename T> class List_1; }

#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_ADDGLOBALWEAKNESS_1_OFFSET UNITYSDK_OFFSET(0x19404520)
#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_ADDGLOBALWEAKNESS_OFFSET UNITYSDK_OFFSET(0x194043D0)
#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_CHECKHASGLOBALWEAKNESS_1_OFFSET UNITYSDK_OFFSET(0x194047A0)
#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_CHECKHASGLOBALWEAKNESS_OFFSET UNITYSDK_OFFSET(0x19404740)
#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_GETGLOBALWEAKNESSLIST_OFFSET UNITYSDK_OFFSET(0x19404430)
#define RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_GETWEAKNESSFORBATTLEMONSTER_OFFSET UNITYSDK_OFFSET(0x194042C0)

namespace RPG::GameCore
{
	inline static constexpr unsigned int AdventureNpcMonsterWeaknessHelp_TypeDefinitionIndex = 57164;

	class AdventureNpcMonsterWeaknessHelp : public ::System::Object
	{
	public:
		static ::Il2CppArray<::RPG::GameCore::AttackDamageType>* GetWeaknessForBattleMonster(::System::UInt32 a1)
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::System::UInt32))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_GETWEAKNESSFORBATTLEMONSTER_OFFSET))(a1);
		}

		static ::Il2CppArray<::RPG::GameCore::AttackDamageType>* AddGlobalWeakness(::Il2CppArray<::RPG::GameCore::AttackDamageType>* a1, ::RPG::GameCore::MonsterRank a2)
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::Il2CppArray<::RPG::GameCore::AttackDamageType>*, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_ADDGLOBALWEAKNESS_OFFSET))(a1, a2);
		}

		static ::System::Boolean CheckHasGlobalWeakness(::RPG::GameCore::AttackDamageType a1, ::RPG::GameCore::MonsterRank a2)
		{
			return ((::System::Boolean(*)(::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_CHECKHASGLOBALWEAKNESS_OFFSET))(a1, a2);
		}

		static ::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* GetGlobalWeaknessList()
		{
			return ((::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*(*)())((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_GETGLOBALWEAKNESSLIST_OFFSET))();
		}

		static ::Il2CppArray<::RPG::GameCore::AttackDamageType>* AddGlobalWeakness_1(::Il2CppArray<::RPG::GameCore::AttackDamageType>* a1, ::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* a2, ::RPG::GameCore::MonsterRank a3)
		{
			return ((::Il2CppArray<::RPG::GameCore::AttackDamageType>*(*)(::Il2CppArray<::RPG::GameCore::AttackDamageType>*, ::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_ADDGLOBALWEAKNESS_1_OFFSET))(a1, a2, a3);
		}

		static ::System::Boolean CheckHasGlobalWeakness_1(::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>* a1, ::RPG::GameCore::AttackDamageType a2, ::RPG::GameCore::MonsterRank a3)
		{
			return ((::System::Boolean(*)(::System::Collections::Generic::List_1<::Struct_2_A98C406BD653F8E9>*, ::RPG::GameCore::AttackDamageType, ::RPG::GameCore::MonsterRank))((::PBYTE)hIl2Cpp + RPG_GAMECORE_ADVENTURENPCMONSTERWEAKNESSHELP_CHECKHASGLOBALWEAKNESS_1_OFFSET))(a1, a2, a3);
		}
	};
}
