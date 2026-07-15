#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace RPG::Client::FateRin::Battle { class FateRinBattleEnemyHudSingleViewModel; }
namespace System { template <typename T> class Comparison_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1A5C2010)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1A5C2050)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C___SORTANDSETPOSINDEX_B__14_0_OFFSET UNITYSDK_OFFSET(0x1A5C2060)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemyHudViewModel___c_TypeDefinitionIndex = 75909;

	class FateRinBattleEnemyHudViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleEnemyHudViewModel___c_TypeDefinitionIndex)->GetStaticField(0x4630);
		}
		static ::System::Comparison_1<::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel*>** StaticGet___9__14_0()
		{
			return (::System::Comparison_1<::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel*>**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleEnemyHudViewModel___c_TypeDefinitionIndex)->GetStaticField(0x4638);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Int32 __SortAndSetPosIndex_b__14_0(::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel* a1, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel* a2)
		{
			return ((::System::Int32(*)(::PVOID, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel*, ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDVIEWMODEL___C___SORTANDSETPOSINDEX_B__14_0_OFFSET))(this, a1, a2);
		}
	};
}
