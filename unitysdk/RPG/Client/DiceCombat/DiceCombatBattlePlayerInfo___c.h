#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

class Class_1_D508B1981C147C96;
namespace System { template <typename T1, typename T2> class Func_2; }

#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__CCTOR_OFFSET UNITYSDK_OFFSET(0x180BFA50)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__CTOR_OFFSET UNITYSDK_OFFSET(0x180BFA90)
#define RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__HASROLLEDDICERESULT_B__25_0_OFFSET UNITYSDK_OFFSET(0x180BFAA0)

namespace RPG::Client::DiceCombat
{
	inline static constexpr unsigned int DiceCombatBattlePlayerInfo___c_TypeDefinitionIndex = 72131;

	class DiceCombatBattlePlayerInfo___c : public ::System::Object
	{
	public:
		static ::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>** StaticGet___9__25_0()
		{
			return (::System::Func_2<::Class_1_D508B1981C147C96*, ::System::Boolean>**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattlePlayerInfo___c_TypeDefinitionIndex)->GetStaticField(0x6B190);
		}
		static ::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo___c** StaticGet___9()
		{
			return (::RPG::Client::DiceCombat::DiceCombatBattlePlayerInfo___c**)Il2CppClass::FromTypeDefinitionIndex(DiceCombatBattlePlayerInfo___c_TypeDefinitionIndex)->GetStaticField(0x6B198);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__CCTOR_OFFSET))();
		}

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__CTOR_OFFSET))(this);
		}

		::System::Boolean _HasRolledDiceResult_b__25_0(::Class_1_D508B1981C147C96* a1)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_1_D508B1981C147C96*))((::PBYTE)hIl2Cpp + RPG_CLIENT_DICECOMBAT_DICECOMBATBATTLEPLAYERINFO___C__HASROLLEDDICERESULT_B__25_0_OFFSET))(this, a1);
		}
	};
}
