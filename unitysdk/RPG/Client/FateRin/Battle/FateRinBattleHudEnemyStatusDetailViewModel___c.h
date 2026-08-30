#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_0471857D35382E2E;
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x1CA3E320)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C__CTOR_OFFSET UNITYSDK_OFFSET(0x1CA3E360)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C___REFRESHLINKEINFO_B__11_0_OFFSET UNITYSDK_OFFSET(0x1CA3E370)
#define RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C___REFRESHLINKEINFO_B__11_1_OFFSET UNITYSDK_OFFSET(0x1CA3E390)

namespace RPG::Client::FateRin::Battle
{
	inline static constexpr unsigned int FateRinBattleHudEnemyStatusDetailViewModel___c_TypeDefinitionIndex = 79585;

	class FateRinBattleHudEnemyStatusDetailViewModel___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_0471857D35382E2E*, ::System::String*>** StaticGet___9__11_0()
		{
			return (::System::Func_2<::Class_1_0471857D35382E2E*, ::System::String*>**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudEnemyStatusDetailViewModel___c_TypeDefinitionIndex)->GetStaticField(0x65890);
		}
		static ::System::Func_2<::System::String*, ::System::Boolean>** StaticGet___9__11_1()
		{
			return (::System::Func_2<::System::String*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudEnemyStatusDetailViewModel___c_TypeDefinitionIndex)->GetStaticField(0x65898);
		}
		static ::RPG::Client::FateRin::Battle::FateRinBattleHudEnemyStatusDetailViewModel___c** StaticGet___9()
		{
			return (::RPG::Client::FateRin::Battle::FateRinBattleHudEnemyStatusDetailViewModel___c**)Il2CppClass::FromTypeDefinitionIndex(FateRinBattleHudEnemyStatusDetailViewModel___c_TypeDefinitionIndex)->GetStaticField(0x658A0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C__CTOR_OFFSET))(this);
		}

		::System::String* __RefreshLinkeInfo_b__11_0(::Class_1_0471857D35382E2E* a1)
		{
			return ((::System::String*(*)(::PVOID, ::Class_1_0471857D35382E2E*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C___REFRESHLINKEINFO_B__11_0_OFFSET))(this, a1);
		}

		::System::Boolean __RefreshLinkeInfo_b__11_1(::System::String* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + RPG_CLIENT_FATERIN_BATTLE_FATERINBATTLEHUDENEMYSTATUSDETAILVIEWMODEL___C___REFRESHLINKEINFO_B__11_1_OFFSET))(this, a1);
		}
	};
}
