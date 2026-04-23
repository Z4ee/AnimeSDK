#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D508B1981C147C96;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0xA122480)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0xA1224C0)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__HASROLLEDDICERESULT_B__25_0_OFFSET UNITYSDK_OFFSET(0xA1224D0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattlePlayerInfo___c_TypeDefinitionIndex = 69806;

	class DiceCombatBattlePlayerInfo___c : public ::System::Object
	{
	public:
		static ::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattlePlayerInfo___c_TypeDefinitionIndex)->GetStaticField(0x630E0);
		}
		static ::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattlePlayerInfo___c_TypeDefinitionIndex)->GetStaticField(0x630E8);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasRolledDiceResult_b__25_0(::Class_1_D508B1981C147C96* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D508B1981C147C96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__HASROLLEDDICERESULT_B__25_0_OFFSET))(this, x);
		}
	};
}
