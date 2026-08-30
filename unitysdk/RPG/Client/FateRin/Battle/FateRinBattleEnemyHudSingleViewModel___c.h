#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_42D96751C1376DDB;
namespace System { template <typename T> class Predicate_1; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xCF63A90)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0xCF63AD0)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C__GET_ISHAVEBLOCKSHIELD_B__57_0_OFFSET UNITYSDK_OFFSET(0xCF63AE0)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleEnemyHudSingleViewModel___c_TypeDefinitionIndex = 79540;

	class FateRinBattleEnemyHudSingleViewModel___c : public ::System::Object
	{
	public:
		static ::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Battle::FateRinBattleEnemyHudSingleViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleEnemyHudSingleViewModel___c_TypeDefinitionIndex)->GetStaticField(0x66EB0);
		}
		static ::System::Predicate_1<::Class_1_42D96751C1376DDB*>** StaticGet___9__57_0()
		{
			return (::System::Predicate_1<::Class_1_42D96751C1376DDB*>**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleEnemyHudSingleViewModel___c_TypeDefinitionIndex)->GetStaticField(0x66EB8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _get_IsHaveBlockShield_b__57_0(::Class_1_42D96751C1376DDB* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_42D96751C1376DDB*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEENEMYHUDSINGLEVIEWMODEL___C__GET_ISHAVEBLOCKSHIELD_B__57_0_OFFSET))(this, a1);
		}
	};
}
